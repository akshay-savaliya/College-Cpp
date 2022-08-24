#include <iostream>
#include <string.h>
using namespace std;

class employee
{
protected:
    string fname, lname;

public:
    employee(string f = "Akshay", string l = "savaliya")
    {
        fname = f;
        lname = l;
    }
    // void getdata()
    // {
    //     cout << "Enter a first name : ";
    //     cin >> fname;
    //     cout << "Enter a last name : ";
    //     cin >> lname;
    // }
    void dispdata()
    {
        cout << fname << " " << lname << endl;
    }
};
class hourly_worker : protected employee
{
protected:
    double wage;
    int hours;

public:
    hourly_worker(double w = 100999, int h = 8)
    {
        wage = w;
        hours = h;
    }
    // void getdata1()
    // {
    //     getdata();
    //     cout << "Enter a working Hours : ";
    //     cin >> hours;
    //     cout << "Enter a Wage : ";
    //     cin >> wage;
    // }
    void dispdata1()
    {
        dispdata();
        cout << "Working Hours : " << hours << endl;
        cout << "Wage : " << wage << endl;
        cout << "Pay : " << pay();
    }
    inline double pay()
    {
        return wage * hours;
    }
};

int main()
{
    hourly_worker h1;
    // h1.getdata1();
    h1.dispdata1();
    return 0;
}
