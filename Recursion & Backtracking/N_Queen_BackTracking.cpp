#include <iostream>
using namespace std;

void printWays(bool arr[][4], int size, int row, bool col[], bool d1[], bool d2[], string emp){
    if(row == size){
        cout << emp << endl;
        return;
    }

    for(int i = 0; i < size; i++){
       if(col[i] == false && d1[row + i] == false && d2[row - i + size - 1] == false){
        arr[row][i] = true;
        col[i] = true;
        d1[row + i] = true;
        d2[row - i + size - 1] = true;
        printWays(arr, size, row + 1, col, d1, d2, emp + to_string(row) + to_string(i) + " ");
        arr[row][i] = false;
        col[i] = false;
        d1[row + i] = false;
        d2[row - i + size - 1] = false;

       }

    }
}

int main(){
    bool arr[4][4] = {false};
    bool col[4] = {false};
    bool d1[7] = {false};
    bool d2[7] = {false};
    string emp;
    printWays(arr, 4, 0, col, d1, d2, emp);
    return 0;
}