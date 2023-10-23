#include <iostream>
using namespace std;

bool isPossible(int arr[][4], int row, int coloumn, int size)
{

    for(int i = row - 1; i >= 0; i--){
        if(arr[i][coloumn] == 1) return false;
    }

    for(int i = row - 1, j = coloumn - 1; i >= 0 && j >= 0; i--, j--){
        if(arr[i][j] == 1) return false;
    }

    for(int i = row - 1, j  = coloumn + 1; i >= 0 && j < size; i--, j++){
        if(arr[i][j] == 1) return false;
    }
    return true;
}
void printWays(int arr[][4], int size, string emp, int row)
{
    if (row == size)
    {
        cout << emp << endl;
        return;
    }

    for (int i = 0; i < size; i++)
    {
        
        if (isPossible(arr, row, i, size))
        {
            arr[row][i] = 1;
            printWays(arr, size, emp + to_string(row) + "," + to_string(i) + " ", row + 1);
            arr[row][i] = 0;
        }
    }
}
int main()
{
    int arr[4][4] = {0};
    string emp;
    printWays(arr, 4, emp, 0);

    
    return 0;
}