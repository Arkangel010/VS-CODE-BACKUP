#include <iostream>
#include <string>
using namespace std;

void printPath(int sr, int sc, int dr, int dc, string emp)
{

    if (sc == dc && sr == dr)
    {
        cout << emp << endl;
        return;
    }
    if (sc < dc)
    {
        printPath(sr, sc + 1, dr, dc, emp + "H");
    }
    if (sr < dr)
    {
        printPath(sr + 1, sc, dr, dc, emp + "V");
    }
}

void printPaths(int sr, int sc, int dr, int dc, string emp)
{
    if (sc == dc && sr == dr)
    {
        cout << emp;
        return;
    }
    if (sc < dc)
    {
        for (int i = 1; i < 4; i++)
        {
            printPath(sr, sc + i, dr, dc, emp + to_string(i) + "H ");
        }
    }

    if (sr < dr)
    {
        for (int i = 1; i < 4; i++)
        {
            printPath(sr + i, sc, dr, dc, emp + to_string(i) + "V ");
        }
    }

    if (sr < dr && sc < dc)
    {
        for (int i = 1; i < 4; i++)
        {
            printPath(sr + i, sc + i, dr, dc, emp + to_string(i) + "D ");
        }
    }
}
int main()
{
    string emp;

    printPaths(1, 1, 2, 2, emp);
   
    return 0;
}