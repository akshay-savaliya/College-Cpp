#include <iostream>
using namespace std;

class distance
{
    int feet;
    float inches;

public:
    void getdata()
    {
        cout << "Enter a feet : ";
        cin >> feet;
        cout << "Enter a inches : ";
        cin >> inches;
        while (inches >= 12)
        {
            inches -= 12;
            feet++;
        }
    }

    void dispdata()
    {
        cout << feet << " FEET " << inches << " INCHES " << endl;
    }
    void operator<(distance z)
    {
        if (feet < z.feet || feet == z.feet && inches < z.inches)
        {
            cout << "D1 < D2" << endl;
        }
    }
    void operator>(distance a)
    {
        if (feet > a.feet || feet == a.feet && feet > a.feet)
        {
            cout << "D1 > D2" << endl;
        }
    }
    void operator==(distance q)
    {
        if (feet == q.feet && inches == q.inches)
        {
            cout << "D1 = D2" << endl;
        }
    }
    void operator!=(distance d)
    {
        if (feet != d.feet || inches != inches)
        {
            cout << "D1 != D2" << endl;
        }
    }
};

int main()
{
    class distance d1, d2;
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
