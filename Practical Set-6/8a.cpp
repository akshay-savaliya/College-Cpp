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
    void operator+=(Complex x)
    {
        real += x.real;
        img += x.img;
    }
    void operator-=(Complex z)
    {
        real -= z.real;
        img -= z.img;
    }
    void operator*=(Complex y)
    {
        double real1 = real;
        real = ((real * y.real) - (img * y.img));
        img = ((real1 * y.img) + (img * y.real));
    }
    void operator/=(Complex z)
    {
        double real1 = real;
        double img1 = img;
        real = (real * z.real + img * z.img) / (z.real * z.real + z.img * z.img);
        img = (img1 * z.real - real1 * z.img) / (z.real * z.real + z.img * z.img);
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
    int op;
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

    cout << "C1 : ";
    c1.dispdata();
    cout << "C2 : ";
    c2.dispdata();

    cout << "Select operation " << endl;
    cout << "1 : +=" << endl;
    cout << "2 : -=" << endl;
    cout << "3 : *=" << endl;
    cout << "4 : /=" << endl;
    cin >> op;

    switch (op)
    {
    case 1:
        cout << "-(+=)-" << endl;
        cout << "-------" << endl;
        c1 += c2;
        cout << c1.getReal() << " + " << c1.getImaginary() << "i" << endl;
        cout << "-------" << endl;
        break;
    case 2:
        cout << "-(-=)-" << endl;
        cout << "-------" << endl;
        c1 -= c2;
        cout << c1.getReal() << " + " << c1.getImaginary() << "i" << endl;
        cout << "-------" << endl;
        break;
    case 3:
        cout << "--multiplication--" << endl;
        cout << "-------" << endl;
        c1 *= c2;
        cout << c1.getReal() << " + " << c1.getImaginary() << "i" << endl;
        cout << "-------" << endl;
        break;
    case 4:
        cout << "--division--" << endl;
        cout << "-------" << endl;
        c1 /= c2;
        cout << c1.getReal() << " + " << c1.getImaginary() << "i" << endl;
        cout << "-------" << endl;

    default:
        cout << "invalid input" << endl;
        break;
    }

    return 0;
}
