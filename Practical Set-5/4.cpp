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
    void sort_percentagewise(student s[], int n)
    {
        student temp;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
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
};

int main()
{
    int n, i;
    cout << "Enter a no. of student data : ";
    cin >> n;

    student s[n];

    for (i = 0; i < n; i++)
    {
        s[i].getdata();
    }

    cout << "----------before sorting----------" << endl;

    for (i = 0; i < n; i++)
    {
        s[i].dispdata();
    }

    cout << "----------after sorting----------" << endl;

    s[0].sort_percentagewise(s, n);
    for (i = 0; i < n; i++)
    {
        s[i].dispdata();
    }
    return 0;
}
