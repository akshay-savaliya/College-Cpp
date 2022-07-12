#include <iostream>
using namespace std;

class Date
{
    int dd, mm, yy;

public:
    Date()
    {
        dd = 0;
        mm = 0;
        yy = 0;
    }
    ~Date()
    {
    }
    void getDate()
    {
        cout << "Enter Day : ";
        cin >> dd;
        cout << "Enter Month : ";
        cin >> mm;
        cout << "Enter Year : ";
        cin >> yy;
    }
    void setDate(int &d, int &m, int &y)
    {
        dd = d;
        mm = m;
        yy = y;
    }
    int checkValidity()
    {
        switch (mm)
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (dd < 1 || dd > 31)
                return 0;
            else
                return 1;
        case 4: case 6: case 9: case 11:
            if (dd < 1 || dd > 30)
                return 0;
            else
                return 1;
        case 2:
            if (dd < 1 || dd > 29 && yy % 4 == 0 || dd > 28 && yy % 4 != 0)
                return 0;
            else
                return 1;
        default:
            return 0;
        }
    }
    void printDate()
    {
        cout << dd << " / " << mm << " / " << yy << endl;
    }
    void nextDay()
    {
        switch (mm)
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (dd == 31)
            {
                dd = 1;
                if (mm == 12)
                {
                    mm = 1;
                    yy++;
                }
                else
                    mm++;
            }
            else
                dd++;
            break;
        case 4: case 6: case 9: case 11:
            if (dd == 30)
            {
                dd = 1;
                mm++;
            }
            else
                dd++;
            break;
        case 2:
            if (yy % 4 == 0 && dd == 29)
            {
                dd = 1;
                mm++;
            }
            else if (yy % 4 != 0 && dd == 28)
            {
                dd = 1;
                mm++;
            }
            else
                dd++;
            break;
        default:
            std::cout << "Invalid month";
        }
    }
};

int main()
{
    Date d1;
    d1.getDate();
    if (d1.checkValidity())
    {
        d1.printDate();
        cout << "--------------" << endl;
        cout << "After increment" << endl;
        cout << "--------------" << endl;
        d1.nextDay();
        d1.printDate();
    }
    else
    {
        cout << "Invalid Input";
    }
}
