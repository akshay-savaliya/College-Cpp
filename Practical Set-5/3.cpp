#include <iostream>
#include <string.h>
using namespace std;

class catalog
{
    string author;
    int year_of_publication, no_of_copies;

public:
    catalog()
    {
        author = "null";
        year_of_publication = 0;
        no_of_copies = 0;
    }
    ~catalog()
    {
    }
    void getdata()
    {
        cout << "Enter a author name : ";
        cin >> author;
        cout << "Enter a publication year : ";
        cin >> year_of_publication;
        cout << "Enter a no of copies : ";
        cin >> no_of_copies;
    }
    void dispdata()
    {
        cout << "Author name : " << author << endl;
        cout << "Publication year : " << year_of_publication << endl;
        cout << "No of copies : " << no_of_copies << endl;
    }
    void searchTitle(string &membersTitle)
    {
        if (!(membersTitle.compare(author)))
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
    int n;
    string membersTitle;
    cout << "Enter a no of catalog : " << endl;
    cin >> n;
    catalog c[n];
    for (int i = 0; i < n; i++)
    {
        c[i].getdata();
    }
    cout << "-----------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        c[i].dispdata();
    }
    cout << "-----------------------------" << endl;
    cout << "Enter a title : " << endl;
    cin >> membersTitle;
    cout << "-----------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        c[i].searchTitle(membersTitle);
    }
    return 0;
}
