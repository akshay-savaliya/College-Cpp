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
        cout << "Enter a string : ";
        cin >> str;
    }
    void dispdata()
    {
        cout << "String : " << str << endl;
    }
    void concatenate(String x)
    {
        strcat(str, x.str);
    }
};

int main()
{
    String s1, s2, s3;

    s1.getdata();
    s2.getdata();

    cout << "-----before concatenate-----" << endl;
    s1.dispdata();
    s2.dispdata();

    cout << "-----after concatenate-----" << endl;
    s1.concatenate(s2);
    s1.dispdata();

    return 0;
}
