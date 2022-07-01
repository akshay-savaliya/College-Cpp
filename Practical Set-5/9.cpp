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
        cout << "Enter a second : " << endl;
        cin >> s;
    }
    void dispdata()
    {
        cout << h << " h " << m << " m " << s << " s " << endl;
    }
    void convert()
    {
        h = s / 3600;
        s = s % 3600;
        m = s / 60;
        s = s % 60;
    }
    void add(time x, time z)
    {
        h = x.h + z.h;
        m = x.m + z.m;
        s = x.s + z.s;
    }
};

int main()
{
    time t1, t2, t3;
    t1.getdata();
    t2.getdata();

    cout << "-----befor convert-----" << endl;
    t1.dispdata();
    t2.dispdata();
    t3.add(t1, t2);
    t3.dispdata();

    cout << "-----after convert-----" << endl;
    t1.convert();
    t1.dispdata();
    t2.convert();
    t2.dispdata();
    t3.add(t1, t2);
    t3.dispdata();

    return 0;
}
