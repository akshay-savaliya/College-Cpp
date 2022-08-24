#include <iostream>
using namespace std;
class Circle
{
protected:
    float radius, area;

public:
    Circle()
    {
        radius = 0;
        area = 0;
    }
    ~Circle()
    {
    }
    void getdata()
    {
        cout << "Enter a radius : ";
        cin >> radius;
        area_of_circle();
    }
    void area_of_circle()
    {
        area = 3.14 * radius * radius;
    }
    void dispdata()
    {
        cout << "Radius : " << radius << endl;
        cout << "Area of a circle is " << area << endl;
    }
};
class Cylinder : protected Circle
{
    float height, volume;

public:
    Cylinder()
    {
        height = 0;
    }
    ~Cylinder()
    {
    }
    void getcylinder()
    {
        cout << "Enter a height : ";
        cin >> height;
        cout << "Enter  a radius : ";
        cin >> radius;
        volume_of_cylinder();
    }
    void volume_of_cylinder()
    {
        volume = 3.14 * radius * radius * height;
    }
    void dispcylinder()
    {
        cout << "radius : " << radius << endl;
        cout << "height : " << height << endl;
        cout << "volume : " << volume << endl;
    }
};
int main()
{
    Circle c1;
    Cylinder c2;
    c1.getdata();
    c1.dispdata();
    c2.getcylinder();
    c2.dispcylinder();
    return 0;
}
