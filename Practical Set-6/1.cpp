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
    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
    Complex operator-(Complex z)
    {
        Complex temp;
        temp.real = real - z.real;
        temp.img = img - z.img;
        return temp;
    }
    Complex operator*(Complex y)
    {
        Complex temp;
        temp.real = ((real * y.real) - (img * y.img));
        temp.img = ((real * y.img) + (img * y.real));
        return temp;
    }
    Complex operator/(Complex z)
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
    cout << "Enter a first Complex number" << endl;
    cout << "real part : ";
    cin >> r1;
    cout << "imagnary part : ";
    cin >> i1;
    cout << "Enter a second Complex number" << endl;
    cout << "real part : ";
    cin >> r2;
    cout << "imagnary part : ";
    cin >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);
    Complex temp;

    cout << "C1 : ";
    c1.dispdata();
    cout << "C2 : ";
    c2.dispdata();

    cout << "--addition--" << endl;
    cout << "-------" << endl;
    temp = c1 + c2;
    cout << temp.getReal() << " + " << temp.getImaginary() << "i" << endl;
    ;
    cout << "-------" << endl;

    cout << "--subtraction--" << endl;
    cout << "-------" << endl;
    temp = c1 - c2;
    cout << temp.getReal() << " + " << temp.getImaginary() << "i" << endl;
    cout << "-------" << endl;

    cout << "--multiplication--" << endl;
    cout << "-------" << endl;
    temp = c1 * c2;
    cout << temp.getReal() << " + " << temp.getImaginary() << "i" << endl;
    cout << "-------" << endl;

    cout << "--division--" << endl;
    cout << "-------" << endl;
    temp = c1 / c2;
    cout << temp.getReal() << " + " << temp.getImaginary() << "i" << endl;
    cout << "-------" << endl;

    return 0;
}
