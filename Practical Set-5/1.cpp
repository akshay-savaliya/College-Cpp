#include <iostream>
#include<string.h>
using namespace std;

class player
{
    string pnm, tnm;
    double avg;

public:
    void getdata()
    {
        cout << "Enter a Player name : ";
        cin >> pnm;
        cout << "Enter a Team name : ";
        cin >> tnm;
        cout << "Enter a Batting average : ";
        cin >> avg;
        cout << "------------------------------" << endl;
    }
    void dispdata()
    {
        cout << "Player name : " << pnm << endl;
        cout << "Team name : " << tnm << endl;
        cout << "Batting average : " << avg << endl;
    }
    void sort_batting_avg(player p[], int n)
    {
        player temp;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (p[i].avg > p[j].avg)
                {
                    temp = p[i];
                    p[i] = p[j];
                    p[j] = temp;
                }
            }
        }
    }

    void sort_batting_avg_teamwise(player p[], int n)
    {
        player temp;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (!(p[i].tnm.compare(p[j].tnm)))
                {
                    temp = p[i];
                    p[i] = p[j];
                    p[j] = temp;
                }
            }
        }
    }
};

int main()
{
    int n;
    cout << "Enter a no. of player : " << endl;
    cin >> n;
    player p[n];
    for (int i = 0; i < n; i++)
    {
        p[i].getdata();
    }
    for (int i = 0; i < n; i++)
    {
        p[i].dispdata();
    }

    // for (int i = 0; i < n; i++)
    // {
    //     p[i].sort_batting_avg(p, n);
    // }

    p[0].sort_batting_avg(p, n);

    // p[1].sort_batting_avg(p,n);

    // p[2].sort_batting_avg(p,n);

    // any object because we pass whole array (p[n])
    // therefor don't matter we call any object throught

    cout << "-------------------------------" << endl;
    cout << "--------sort_batting_avg-------" << endl;
    cout << "-------------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        p[i].dispdata();
    }

    p[0].sort_batting_avg_teamwise(p, n);

    cout << "-------------------------------" << endl;
    cout << "after sort_batting_avg_teamwise" << endl;
    cout << "-------------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        p[i].dispdata();
    }

    return 0;
}
