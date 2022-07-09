#include <iostream>
#include <string.h>
using namespace std;

class student
{
    string name;
    string Class;
    int roll_no;
    int mark[6];
    double per;

public:
    student()
    {
        name = "null";
        Class = "null";
        roll_no = 0;
        for (int i = 0; i < 6; i++)
        {
            mark[i] = 0;
        }
    }
    ~student()
    {
    }
    void getdata()
    {
        cout << "Enter a name : ";
        cin >> name;
        cout << "Enter a roll number : ";
        cin >> roll_no;
        cout << "Enter a class : ";
        cin >> Class;
        for (int i = 0; i < 6; i++)
        {
            cout << "Mark [" << i + 1 << "] : ";
            cin >> mark[i];
        }
        per = percentage();
    }
    void dispdata()
    {
        cout << endl;
        cout << "Name : " << name << endl;
        cout << "Class : " << Class << endl;
        cout << "Roll no : " << roll_no << endl;
        for (int i = 0; i < 6; i++)
        {
            cout << "Mark [" << i + 1 << "] : " << mark[i] << endl;
        }
        cout << " percentage : " << per << endl;
        cout << " percentage based on class : ";
        class_based_on_percentage();
    }
    double percentage()
    {
        int sum = 0;
        for (int i = 0; i < 6; i++)
        {
            sum = sum + mark[i];
        }
        return (sum / 6);
    }

    void class_based_on_percentage()
    {
        if (per < 60)
        {
            cout << "AVERAGE" << endl;
        }
        else if (per < 70)
        {
            cout << "GOOD" << endl;
        }
        else if (per < 75)
        {
            cout << "VERY GOOD" << endl;
        }
        else if (per < 80)
        {
            cout << "DISTINCTION" << endl;
        }
        else if (per < 90)
        {
            cout << "EXCELLENT" << endl;
        }
        else
        {
            cout << "OUTSTANDING" << endl;
        }
    }

    bool operator<(student x)
    {
        if (per < x.per)
            return true;
        else
            return false;
    }

    bool operator>(student z)
    {
        if (per > z.per)
            return true;
        else
            return false;
    }
    bool operator==(student z)
    {
        if (per == z.per)
            return true;
        else
            return false;
    }
};

int main()
{
    int n, i, compare1, compare2;
    cout << "Enter a no. of student data : ";
    cin >> n;

    student s[n];

    for (i = 0; i < n; i++)
    {
        cout << "Student : " << i + 1 << endl;
        s[i].getdata();
    }
    cout << "---------------------" << endl;
    cout << "       Display       " << endl;
    cout << "---------------------" << endl;
    for (i = 0; i < n; i++)
    {
        s[i].dispdata();
    }

    cout << endl;
    cout << "Enter which two student's percentage you want to compare : ";
    cin >> compare1 >> compare2;

    if (s[compare1 - 1] < s[compare2 - 1])
    {
        cout << "student:" << compare1 << " < "
             << "student:" << compare2 << endl;
    }
    if (s[compare1 - 1] > s[compare2 - 1])
    {
        cout << "student:" << compare1 << " > "
             << "student:" << compare2 << endl;
    }
    if (s[compare1 - 1] == s[compare2 - 1])
    {
        cout << "student:" << compare1 << " = "
             << "student:" << compare2 << endl;
    }

    return 0;
}
