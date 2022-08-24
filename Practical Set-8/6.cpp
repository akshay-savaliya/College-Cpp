#include <iostream>
using namespace std;

class Publication
{
protected:
    string title;
    float price;

public:
    Publication()
    {
        title = "Unknown";
        price = 0;
    }
    ~Publication()
    {
    }
    void getdata()
    {
        cout << "Enter title : ";
        cin >> title;
        cout << "Enter price : ";
        cin >> price;
    }
    void dispdata()
    {
        cout << "Title : " << title << endl;
        cout << "Price : " << price << endl;
    }
};

class sales
{
protected:
    int total_sales;

public:
    sales()
    {
        total_sales = 0;
    }
    void getdata1()
    {
        cout << "Enter a Total sales : ";
        cin >> total_sales;
    }
    void dispdata1()
    {
        cout << "Total sales is : " << total_sales << endl;
    }
};
class Book : protected Publication, protected sales
{
private:
    int page_count;

public:
    Book()
    {
        page_count = 0;
    }
    void getdata2()
    {
        getdata();
        getdata1();
        cout << "Enter number of pages : ";
        cin >> page_count;
    }
    void dispdata2()
    {
        dispdata();
        dispdata1();
        cout << "Number of pages : " << page_count << endl;
    }
};
class Tape : protected Publication, protected sales
{
private:
    float mins;

public:
    Tape()
    {
        mins = 0;
    }
    void getdata3()
    {
        getdata();
        getdata1();
        cout << "Enter Tape length [Mins] : ";
        cin >> mins;
    }
    void dispdata3()
    {
        dispdata();
        dispdata1();
        cout << "Tape length in mins : " << mins << endl;
    }
};
int main()
{
    Book b1;
    Tape t1;
    b1.getdata2();
    cout << "----------------" << endl;
    t1.getdata3();
    cout << "----------------" << endl;
    cout << "----Dispplay----" << endl;
    cout << "----------------" << endl;
    b1.dispdata2();
    cout << "----------------" << endl;
    t1.dispdata3();
}
