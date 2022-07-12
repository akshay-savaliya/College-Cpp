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
    void operator<(Date d)
    {
        if (yy < d.yy || yy == d.yy && mm < d.mm || yy == d.yy && mm == d.mm && dd < d.dd)
        {
            cout << "D1 < D2" << endl;
        }
    }
    void operator>(Date d)
    {
        if (yy > d.yy || yy == d.yy && mm > d.mm || yy == d.yy && mm == d.mm && dd > d.dd)
        {
            cout << "D1 > D2" << endl;
        }
    }
    void operator==(Date d)
    {
        if (yy == d.yy && mm == d.mm && dd == d.dd)
        {
            cout << "D1 = D2" << endl;
        }
    }
    void operator!=(Date d)
    {
        if (yy != d.yy || mm != d.mm || dd != d.dd)
        {
            cout << "D1 != D2" << endl;
        }
    }
};
int main()
{
    Date d1, d2;
    d1.getDate();
    d2.getDate();
    if ((d1.checkValidity() && d2.checkValidity()))
    {
        d1 < d2;
        d1 > d2;
        d1 == d2;
        d1 != d2;
    }
    else
        std::cout << "Invalid date input\n";
}
