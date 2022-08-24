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
class Book : protected Publication
{
private:
    int page_count;

public:
    Book()
    {
        page_count = 0;
    }
    void getdata1()
    {
        getdata();
        cout << "Enter number of pages : ";
        cin >> page_count;
    }
    void dispdata1()
    {
        dispdata();
        cout << "Number of pages : " << page_count << endl;
    }
};
class Tape : protected Publication
{
private:
    float mins;

public:
    Tape()
    {
        mins = 0;
    }
    void getdata2()
    {
        getdata();
        cout << "Enter Tape length [Mins] : ";
        cin >> mins;
    }
    void dispdata2()
    {
        dispdata();
        cout << "Tape length in mins : " << mins << endl;
    }
};
int main()
{
    Book b1;
    Tape t1;
    b1.getdata1();
    cout << "----------------" << endl;
    t1.getdata2();
    cout << "----------------" << endl;
    cout << "----Dispplay----" << endl;
    cout << "----------------" << endl;
    b1.dispdata1();
    cout << "----------------" << endl;
    t1.dispdata2();
}
