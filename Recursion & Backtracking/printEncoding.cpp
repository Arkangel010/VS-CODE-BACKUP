#include <iostream>
#include <string>
using namespace std;

void print(string no, string emp)
{
    if (no.length() == 0)
    {
        cout << emp << endl;
        return;
    }

    if (no[0] == 0)
        return;

    string st = no.substr(1, no.length() - 1);
    print(st, emp + char(int((no[0]) - 48) + 96));

    // if (no.length() > 1)
    // {
        string com = no.substr(0, 2);
        int comp = stoi(com);

        if (comp < 27 && comp > 9)
        {
            string st = no.substr(2, no.length() - 1);
            print(st, emp + char(comp + 96));
        }
   // }
}
int main()
{

    string no = "26";
    string emp;
    print(no, emp);

    return 0;
}