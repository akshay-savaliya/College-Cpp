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
    String(char *x)
    {
        strcpy(str, x);
    }
    ~String()
    {
    }
    void getdata()
    {
        cin.getline(str, 20);
    }
    void dispdata()
    {
        cout << str;
    }
    int operator<(String z)
    {
        return (strcmp(str, z.str) < 0);
    }
    int operator>(String z)
    {
        return (strcmp(str, z.str) > 0);
    }
    int operator==(String z)
    {
        return (strcmp(str, z.str) == 0);
    }
};

int main()
{
    String s1, s2;
    cout << "Enter a string S1 : ";
    s1.getdata();
    cout << "Enter a string S2 : ";
    s2.getdata();
    if (s1 > s2)
    {
        s1.dispdata();
        cout << " > ";
        s2.dispdata();
    }
    else if (s1 < s2)
    {
        s1.dispdata();
        cout << " < ";
        s2.dispdata();
    }
    else if (s1 == s2)
    {
        s1.dispdata();
        cout << " = ";
        s2.dispdata();
    }
    else
    {
        s1.dispdata();
        cout << " != ";
        s2.dispdata();
    }
    return 0;
}
