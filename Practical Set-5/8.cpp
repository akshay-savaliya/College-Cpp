#include <iostream>
using namespace std;

class distance
{
    int feet;
    float inches;

public:
    distance()
    {
        feet = 0;
        inches = 0;
    }
    ~distance()
    {
    }
    void getdata()
    {
        cout << "Enter a feet : ";
        cin >> feet;
        cout << "Enter a inches : ";
        cin >> inches;
    }
    void dispdata()
    {
        cout << feet << " Feet " << inches << " Inches" << endl;
    }

    //(-----d1.add(d2)-----)

    // void add(distance x)
    // {
    //     feet = feet + x.feet;
    //     inches = inches + x.inches;
    //     while (inches >= 12)
    //     {
    //         inches = inches - 12;
    //         feet++;
    //     }
    // }

    //(-----d3=d1.add(d2)-----)

    // distance add(distance x)
    // {
    //     distance temp;
    //     temp.feet = feet + x.feet;
    //     temp.inches = inches + x.inches;
    //     while (temp.inches >= 12)
    //     {
    //         temp.inches = temp.inches - 12;
    //         temp.feet++;
    //     }
    //     return temp;
    // }

    //(-----d3.add(d1,d2)-----)

    void add(distance x, distance y)
    {
        feet = x.feet + y.feet;
        inches = x.inches + y.inches;
        while (inches >= 12)
        {
            inches = inches - 12;
            feet++;
        }
    }
};

int main()
{
    class distance d1, d2, d3;
    d1.getdata();
    d2.getdata();
    cout << "D1 : ";
    d1.dispdata();
    cout << "D2 : ";
    d2.dispdata();

    // d1.add(d2);
    // cout << "D1 : ";
    // d1.dispdata();

    // d3 = d1.add(d2);
    // cout << "D3 : ";
    // d3.dispdata();

    d3.add(d1, d2);
    cout << "D3 : ";
    d3.dispdata();

    return 0;
}
