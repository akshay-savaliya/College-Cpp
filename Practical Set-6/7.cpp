#include <iostream>
using namespace std;

class time
{
    int h, m, s;

public:
    time()
    {
        h = 0;
        m = 0;
        s = 0;
    }
    ~time()
    {
    }
    void getdata()
    {
        cout << "Enter a second : ";
        cin >> s;
        convert();
    }
    void convert()
    {
        h = s / 3600;
        s = s % 3600;
        m = s / 60;
        s = s % 60;
    }
    void dispdata()
    {
        cout << h << " Hour " << m << " Minute " << s << " Second" << endl;
    }
    void operator<(time x)
    {
        if (h < x.h || h == x.h && m < x.m || h == x.h && m == x.m && s < x.s)
        {
            cout << "T1 < T2" << endl;
        }
    }
    void operator>(time x)
    {
        if (h > x.h || h == x.h && m > x.m || h == x.h && m == x.m && s > x.s)
        {
            cout << "T1 > T2" << endl;
        }
    }
    void operator==(time z)
    {
        if (h == z.h && m == z.m && s == z.s)
        {
            cout << "T1 = T2" << endl;
        }
    }
    void operator!=(time z)
    {
        if (h != z.h || m != z.m || s != z.s)
        {
            cout << "T1 != T2" << endl;
        }
    }
};

int main()
{
    time t1, t2;

    t1.getdata();
    t2.getdata();

    cout << "T1 : ";
    t1.dispdata();
    cout << "T2 : ";
    t2.dispdata();

    t1 < t2;
    t1 > t2;
    t1 == t2;
    t1 != t2;

    return 0;
}
