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
    void add(matrix x, matrix y)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                a[i][j] = x.a[i][j] + y.a[i][j];
            }
        }
    }
    void subtraction(matrix x, matrix y)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                a[i][j] = x.a[i][j] - y.a[i][j];
            }
        }
    }
    void multiplication(matrix x, matrix y)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    a[i][j] += x.a[i][k] * y.a[k][j];
                }
            }
        }
    }
};

int main()
{
    matrix m1, m2, m3, m4, m5;
    cout << "Enter a Matrix 1 : " << endl;
    m1.getdata();
    cout << "Enter a Matrix 2 : " << endl;
    m2.getdata();
    cout << "Matrix 1 : " << endl;
    m1.dispdata();
    cout << "Matrix 2 : " << endl;
    m2.dispdata();
    cout << "Matrix 1 + Matrix 2 : " << endl;
    m3.add(m1, m2);
    m3.dispdata();
    cout << "Matrix 1 - Matrix 2 : " << endl;
    m4.subtraction(m1, m2);
    m4.dispdata();
    cout << "Matrix 1 * Matrix 2 : " << endl;
    m5.multiplication(m1, m2);
    m5.dispdata();
    return 0;
}
