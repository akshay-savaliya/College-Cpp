#include <iostream>
using namespace std;

class kilo;

class tons
{
    double ton;

public:
    tons()
    {
        ton = 0;
    }
    tons(double x)
    {
        ton = x;
    }
    void getdata()
    {
        cout << "Enter ton : ";
        cin >> ton;
    }
    void dispdata()
    {
        cout << "Ton : " << ton << endl;
    }
    double getton()
    {
        return ton;
    }
};

class kilo
{
    double kg, gms;

public:
    kilo()
    {
        kg = 0;
        gms = 0;
    }
    kilo(tons t)
    {
        gms = (t.getton()) * 100 * 1000;
        convert();
    }
    void input()
    {
        cout << "Enter Kg : ";
        cin >> kg;
        cout << "Enter grams : ";
        cin >> gms;
    }
    void convert()
    {
        kg = (int)(gms / 1000);
        gms = (int)gms % 1000;
    }
    void printdata()
    {
        cout << "Kg : " << kg << " Grams : " << gms << endl;
    }
    operator tons()
    {
        tons temp;
        double kg2 = kg;
        kg2 += (gms / 1000);
        kg2 /= 100;
        temp = kg2;
        return temp;
    }
};

int main()
{
    kilo k; // kilo class to tons
    k.input();
    tons t = k;
    t.dispdata();
    tons t2; // tons class to kilo
    t2.getdata();
    kilo k2 = t2;
    k2.printdata();
    return 0;
}
