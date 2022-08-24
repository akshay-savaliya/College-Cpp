#include <iostream>
#include <string.h>
using namespace std;

class person
{
protected:
    string name;
    int code;

public:
    person()
    {
        name = "";
        code = 0;
    }
    ~person() {}
    void getdata()
    {
        cout << "Enter a name : ";
        cin >> name;
        cout << "Enter a code : ";
        cin >> code;
    }
    void dispdata()
    {
        cout << "Name : " << name << endl;
        cout << "Code : " << code << endl;
    }
};

class account : virtual public person
{
protected:
    float pay;

public:
    account()
    {
        pay = 0;
    }
    ~account() {}
    void getaccount()
    {
        cout << "Enter a pay : ";
        cin >> pay;
    }
    void dispaccount()
    {
        cout << "pay : " << pay << endl;
    }
};

class admin : virtual public person
{
protected:
    int experience;

public:
    admin()
    {
        experience = 0;
    }
    ~admin() {}
    void getadmin()
    {
        cout << "Enter a experience : ";
        cin >> experience;
    }
    void dispadmin()
    {
        cout << "Experience : " << experience << endl;
    }
};

class employee : protected account, protected admin
{
public:
    void get_emp()
    {
        cout << "Enter a name : ";
        cin >> name;
        cout << "Enter a code : ";
        cin >> code;
        cout << "Enter a pay : ";
        cin >> pay;
        cout << "Enter a experience : ";
        cin >> experience;
    }
    void disp_emp()
    {
        cout << "Name : " << name << endl;
        cout << "Code : " << code << endl;
        cout << "pay : " << pay << endl;
        cout << "Experience : " << experience << endl;
    }
};

int main()
{
    person p1;
    account a1;
    admin ad1;
    employee e1;

    cout << "Person input" << endl;
    p1.getdata();

    cout << "Account input" << endl;
    a1.getaccount();

    cout << "Admin input" << endl;
    ad1.getadmin();

    cout << "employee input" << endl;
    e1.get_emp();

    cout << "----------Display----------" << endl;

    cout << "Person Details : " << endl;
    p1.dispdata();
    cout << "@@@@@@@@@@@@@@@" << endl;

    cout << "Account Details : " << endl;
    a1.dispaccount();
    cout << "@@@@@@@@@@@@@@@" << endl;

    cout << "Admin input : " << endl;
    ad1.dispadmin();
    cout << "@@@@@@@@@@@@@@@" << endl;

    cout << "employee Details : " << endl;
    e1.disp_emp();
    cout << "@@@@@@@@@@@@@@@" << endl;

    return 0;
}
