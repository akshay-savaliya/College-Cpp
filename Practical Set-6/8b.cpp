#include <iostream>
using namespace std;

class matrix
{
    int a[3][3];

public:
    matrix()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                a[i][j] = 0;
            }
        }
    }
    ~matrix()
    {
    }
    void getdata()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void dispdata()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << a[i][j];
                cout << " ";
            }
            cout << endl;
        }
    }
    void operator+=(matrix x)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                a[i][j] += x.a[i][j];
            }
        }
    }
    void operator-=(matrix x)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                a[i][j] -= x.a[i][j];
            }
        }
    }
    matrix operator*=(matrix y)
    {
        matrix temp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    temp.a[i][j] += a[i][k] * y.a[k][j];
                }
            }
        }
        return temp;
    }
};

int main()
{
    int op;
    matrix m1, m2, temp;
    cout << "Enter a Matrix 1 : " << endl;
    m1.getdata();
    cout << "Enter a Matrix 2 : " << endl;
    m2.getdata();
    cout << "Matrix 1 : " << endl;
    m1.dispdata();
    cout << "Matrix 2 : " << endl;
    m2.dispdata();

    cout << "Select operation " << endl;
    cout << "1 : +=" << endl;
    cout << "2 : -=" << endl;
    cout << "3 : *=" << endl;
    cin >> op;

    switch (op)
    {
    case 1:
        cout << "Matrix 1 + Matrix 2 : " << endl;
        m1 += m2;
        m1.dispdata();
        break;
    case 2:
        cout << "Matrix 1 - Matrix 2 : " << endl;
        m1 -= m2;
        m1.dispdata();
        break;
    case 3:
        cout << "Matrix 1 * Matrix 2 : " << endl;
        temp = m1 *= m2;
        temp.dispdata();
        break;

    default:
        cout << "invalid input" << endl;
        break;
    }

    return 0;
}
