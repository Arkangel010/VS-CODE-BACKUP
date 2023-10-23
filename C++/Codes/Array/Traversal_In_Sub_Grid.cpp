#include <iostream>
using namespace std;

bool search(int arr[][9], int er, int ec, int ele){

    int sr = (er / 3)* 3;
    int sc = (ec / 3)* 3;
    int count = 1;

    while(count < 10){
        if(arr[sr][sc] == ele){
            return false;
        }
        if(count % 3 != 0){
            sc++;
        }
        if(count % 3 == 0){
            sr++;
            sc = (ec / 3)* 3;
        }
        count++;
    }
    return true;
}
int main(){

    int arr[9][9] = {{1, 27, 32, 4, 5, 6, 7, 8, 9},
                     {17, 22, 3, 4, 5, 6, 7, 8, 9},
                     {12, 20, 31, 4, 5, 6, 7, 8, 9},
                     {1, 2, 3, 4, 5, 6, 7, 8, 9},
                     {1, 2, 3, 4, 5, 6, 7, 8, 9},
                     {1, 2, 3, 4, 5, 6, 7, 8, 9},
                     {1, 2, 3, 4, 5, 6, 7, 8, 9},
                     {1, 2, 3, 4, 5, 6, 7, 8, 9},
                     {1, 2, 3, 4, 5, 6, 7, 8, 9}
                     };

    cout << search(arr, 1, 1, 32);
    return 0;
}