#include <iostream>
using namespace std;

class date
{
    int year, month, day;

public:
    date()
    {
        year = 0;
        month = 0;
        day = 0;
    }
    ~date()
    {
    }
    void getdata()
    {
        cout << "Enter a day : ";
        cin >> day;
        cout << "Enter a month : ";
        cin >> month;
        cout << "Enter a year : ";
        cin >> year;
    }
    void dispdata()
    {
        cout << day << " / " << month << " / " << year << endl;
    }
    void operator<(date x)
    {
        if (year < x.year || year == x.year && month < x.month || year == x.year && month == x.month && day < x.day)
        {
            cout << "D1 < D2" << endl;
        }
    }
    void operator>(date x)
    {
        if (year > x.year || year == x.year && month > x.month || year == x.year && month == x.month && day > x.day)
        {
            cout << "D1 > D2" << endl;
        }
    }
    void operator==(date x)
    {
        if (year == x.year && month == x.month && day == x.day)
        {
            cout << "D1 = D2" << endl;
        }
    }
    void operator!=(date x)
    {
        if (year != x.year || month != x.month || day != x.day)
        {
            cout << "D1 != D2" << endl;
        }
    }
};

int main()
{
    date d1, d2;
    cout << "(dd/mm/yy)" << endl;
    d1.getdata();
    d2.getdata();

    cout << "D1 : ";
    d1.dispdata();
    cout << "D2 : ";
    d2.dispdata();

    d1 < d2;
    d1 > d2;
    d1 == d2;
    d1 != d2;

    return 0;
}
