#include <iostream>
#include <string>
using namespace std;

class Time12
{
    int hour, min, sec;
    string period;

public:
    Time12()
    {
        hour = 0;
        min = 0;
        sec = 0;
        period = "Unknown";
    }
    void print()
    {
        if (hour <= 12 && hour > 0 && min < 60 && min >= 0 && sec < 60 && sec >= 0)
        {
            std::cout << "Time is : " << hour << ":" << min << ":" << sec << " " << period;
        }
        else
        {
            std::cout << "Invalid";
        }
    }
    void setPeriod(string temp)
    {
        period = temp;
    }
    void setTime(int x, int y, int z)
    {
        hour = x;
        min = y;
        sec = z;
    }
};

class Time24
{
    int hour, min, sec;

public:
    Time24()
    {
        hour = 0;
        min = 0;
        sec = 0;
    }
    ~Time24()
    {
    }
    void input()
    {
        cout << "Enter time [24 hr format]: ";
        cin >> hour >> min >> sec;
    }
    operator Time12()
    {
        Time12 temp;
        if (hour < 12 && hour > 0 || hour == 0)
        {
            temp.setPeriod("am");
            if (hour == 0)
                hour += 12;
            temp.setTime(hour, min, sec);
        }
        else if (hour >= 12 && hour < 24)
        {
            temp.setPeriod("pm");
            if (hour > 12)
                hour -= 12;
            temp.setTime(hour, min, sec);
        }
        else
            cout << "Invalid Input\n";
        return temp;
    }
};
int main()
{
    Time24 t1;
    t1.input();
    Time12 t2 = t1;
    t2.print();
    return 0;
}
