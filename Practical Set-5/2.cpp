#include <iostream>
#include <string.h>
using namespace std;

class Book
{
    string bnm, anm;
    float price;
    int qty;

public:
    Book()
    {
        bnm = "null";
        anm = "null";
        price = 0;
        qty = 0;
    }
    ~Book()
    {
        cout << "Distructor" << endl;
    }
    void getdata()
    {
        cout << "-------------------------" << endl;
        cout << "Enetr a Book name : ";
        cin >> bnm;
        cout << "Enter a author name : ";
        cin >> anm;
        cout << "Enter a Book price : ";
        cin >> price;
        cout << "Enetr a Book qty : ";
        cin >> qty;
    }

    float total_price()
    {
        return price * qty;
    }
    void dispdata()
    {
        cout << "---------------" << endl;
        cout << "---------------" << endl;
        cout << "Book name : " << bnm << endl;
        cout << "author name : " << anm << endl;
        cout << "Price : " << price << endl;
        cout << "Quantity : " << qty << endl;
        cout << "Total price : " << total_price() << endl;
    }

    void sort_total_price(Book b[], int n)
    {
        Book temp;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (b[i].total_price() > b[j].total_price())
                {
                    temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }
    }
};

int main()
{
    int n;
    cout << "Enter a no. books : ";
    cin >> n;
    Book b[n];
    for (int i = 0; i < n; i++)
    {
        b[i].getdata();
    }
    for (int i = 0; i < n; i++)
    {
        b[i].dispdata();
    }
    b[0].sort_total_price(b, n);
    cout << "---------------" << endl;
    cout << "-after_sorting-" << endl;
    cout << "---------------" << endl;
    for (int i = 0; i < n; i++)
    {
        b[i].dispdata();
    }
    return 0;
}
