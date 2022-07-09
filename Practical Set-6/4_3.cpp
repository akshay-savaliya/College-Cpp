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
    int operator!=(String z)
    {
        return (strcmp(str, z.str) != 0);
    }
    void operator+=(String w)
    {
        strcat(str, w.str);
    }
};

int main()
{
    String s1, s2;
    cout << "Enter a string S1 : ";
    s1.getdata();
    cout << "Enter a string S2 : ";
    s2.getdata();
    if (s1 == s2) // if (s1 != s2)
    {
        cout << "Both object are same " << endl;
        s1.dispdata();
        s2.dispdata();
    }
    else if (s1 > s2) // else if (s1 < s2)
    {
        cout << "S1 > S2" << endl;
    }
    else
    {
        cout << "S1 < S2" << endl;
    }
    s1 += s2;
    cout << "concatinat : ";
    s1.dispdata();

    return 0;
}
