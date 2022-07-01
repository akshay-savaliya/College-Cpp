#include <iostream>
using namespace std;

class Complex
{
    double real, img;

public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex(double r, double i)
    {
        real = r;
        img = i;
    }
    ~Complex()
    {
    }
    Complex add(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
    Complex subtraction(Complex z)
    {
        Complex temp;
        temp.real = real - z.real;
        temp.img = img - z.img;
        return temp;
    }
    Complex multiplication(Complex y)
    {
        Complex temp;
        temp.real = ((real * y.real) - (img * y.img));
        temp.img = ((real * y.img) + (img * y.real));
        return temp;
    }
    Complex division(Complex z)
    {
        Complex temp;
        temp.real = (real * z.real + img * z.img) / (z.real * z.real + z.img * z.img);
        temp.img = (img * z.real - real * z.img) / (z.real * z.real + z.img * z.img);
        return temp;
    }
    void dispdata()
    {
        cout << real << " + " << img << "i" << endl;
    }
    double getReal()
    {
        return real;
    }
    double getImaginary()
    {
        return img;
    }
};

int main()
{
    double r1, r2, i1, i2;
    cout << "Enter a 1st real number : ";
    cin >> r1;
    cout << "Enter a 1st imagnary number : ";
    cin >> i1;
    cout << "Enter a 2nd real number : ";
    cin >> r2;
    cout << "Enter a 2nd imagnary number : ";
    cin >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);
    Complex temp;

    c1.dispdata();
    c2.dispdata();

    cout << "--addition--" << endl;
    cout << "-------" << endl;
    temp = c1.add(c2);
    cout << temp.getReal() << " + " << temp.getImaginary() << "i" << endl;
    ;
    cout << "-------" << endl;

    cout << "--subtraction--" << endl;
    cout << "-------" << endl;
    temp = c1.subtraction(c2);
    cout << temp.getReal() << " + " << temp.getImaginary() << "i" << endl;
    cout << "-------" << endl;

    cout << "--multiplication--" << endl;
    cout << "-------" << endl;
    temp = c1.multiplication(c2);
    cout << temp.getReal() << " + " << temp.getImaginary() << "i" << endl;
    cout << "-------" << endl;

    cout << "--division--" << endl;
    cout << "-------" << endl;
    temp = c1.division(c2);
    cout << temp.getReal() << " + " << temp.getImaginary() << "i" << endl;
    cout << "-------" << endl;

    return 0;
}
