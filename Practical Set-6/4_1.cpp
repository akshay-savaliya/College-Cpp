#include <iostream>
#include <string.h>
using namespace std;

class String
{
    char str[20];

public:
    String()
    {
        strcpy(str, "");
    }
    ~String()
    {
    }
    void getdata()
    {
        cin >> str;
    }
    void dispdata()
    {
        cout << str;
    }
    void operator<(String z)
    {
        if (strlen(str) < strlen(z.str))
        {
            cout << "S1 < S2" << endl;
        }
    }
    void operator>(String z)
    {
        if (strlen(str) > strlen(z.str))
        {
            cout << "S1 > S2" << endl;
        }
    }
    void operator==(String z)
    {
        if (strlen(str) == strlen(z.str))
        {
            cout << "S1 = S2" << endl;
        }
    }
    void operator!=(String z)
    {
        if (strlen(str) != strlen(z.str))
        {
            cout << "S1 != S2" << endl;
        }
    }
};

int main()
{
    String s1, s2;
    cout << "Enter a string S1 : ";
    s1.getdata();
    cout << "Enter a string S2 : ";
    s2.getdata();
    s1 < s2;
    s1 > s2;
    s1 == s2;
    s1 != s2;
    return 0;
}
