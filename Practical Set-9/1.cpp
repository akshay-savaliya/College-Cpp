#include <iostream>
#include <string.h>
using namespace std;

class account
{
    long int id, balance;
    string name;

public:
    account()
    {
        id = 0;
        balance = 0;
        name = "";
    }
    void getdata()
    {
        cout << "Enter a account name : ";
        cin >> name;
        cout << "Enter a account id : ";
        cin >> id;
        cout << "Enter a balance : ";
        cin >> balance;
    }
    void dispdata()
    {
        cout << "Account name :" << name << endl;
        cout << "Account id : " << id << endl;
        cout << "Account balance : " << balance << endl;
    }
    void searchid(long int temp)
    {
        if (temp = id)
        {
            dispdata();
        }
        else
        {
            cout << "No record available" << endl;
        }
    }
};

int main()
{
    int size;
    long int idnum;
    cout << "Enter how many account details you want to store : " << endl;
    cin >> size;
    account *acc = new account[size];
    account *temp = acc;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter account [" << i + 1 << "]" << endl;
        acc->getdata();
        acc++;
    }
    acc = temp;
    for (int i = 0; i < size; i++)
    {
        cout << "account [" << i + 1 << "]" << endl;
        acc->dispdata();
        acc++;
    }
    acc = temp;
    cout << "Enter a account id for search : ";
    cin >> idnum;
    for (int i = 0; i < size; i++)
    {
        acc->searchid(idnum);
        acc++;
    }
}
