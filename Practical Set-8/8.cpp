#include <iostream>
using namespace std;

class roll_no
{
protected:
    int rno;

public:
    roll_no()
    {
        rno = 0;
    }
    ~roll_no()
    {
    }
    void getdata()
    {
        cout << "Enter a Roll number : ";
        cin >> rno;
    }
    void dispdata()
    {
        cout << "Roll number is : " << rno;
    }
};
class Engineering : protected roll_no
{
protected:
    string uni;

public:
    Engineering()
    {
        uni = "unknow";
    }
    ~Engineering()
    {
    }
    void getuni()
    {
        cout << "Enter an University name : ";
        cin >> uni;
        getdata();
    }
    void dispuni()
    {
        cout << "University name is : " << uni << endl;
        dispdata();
    }
};
class ce : protected Engineering
{
protected:
    int noc_ce;

public:
    ce()
    {
        noc_ce = 0;
    }
    ~ce()
    {
    }
    void getce()
    {
        getuni();
        cout << "Enter a no of courses in ce : ";
        cin >> noc_ce;
    }
    void dispce()
    {
        dispuni();
        cout << "Courses in ce is : " << noc_ce << endl;
    }
};
class it : protected Engineering
{
protected:
    int noc_it;

public:
    it()
    {
        noc_it = 0;
    }
    ~it()
    {
    }
    void getit()
    {
        getuni();
        cout << "Enter a no of courses in IT : ";
        cin >> noc_it;
    }
    void dispit()
    {
        dispuni();
        cout << "Courses in IT is : " << noc_it << endl;
    }
};

int main()
{
    ce c1;
    it i1;

    c1.getce();
    cout << "----------------" << endl;
    i1.getit();
    cout << "----------------" << endl;
    cout << "----Dispplay----" << endl;
    cout << "----------------" << endl;
    c1.dispce();
    cout << "----------------" << endl;
    i1.dispit();

    return 0;
}
