#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0, d = 0;

    cout << "Enter no of rows an coloumns for matrix 1st! ";
    cin >> a >> b;

    int array1[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> array1[i][j];
            cout << "  ";
        }
        cout << endl;
    }

    cout << "Enter no of rows an coloumns for matrix 2nd! ";
    cin >> c >> d;

     int array2[c][d];

    cout << "Enter elements of matrix 2nd! ";

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> array2[i][j];
            cout << "  ";
        }
        cout << endl;
    }
   
    int arrayr[a][d];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                arrayr[i][j] += array1[i][k] * array2[k][j];
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "   " << arrayr[i][j];
        }
        cout << endl;
    }
    return 0;
}