#include <iostream>
using namespace std;

void printArray(int arr[][9]){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cout << arr[i][j] << " ";

        }
        cout << endl;
    }
}
bool is_Possible(int arr[][9], int r, int c, int ele){
    for(int i = 0; i < 9; i++){
        if(arr[i][c] == ele){
            return false;
        }

        if(arr[r][i] == ele){
            return false;
        }
    }

    int sr = (r / 3) * 3;
    int sc = (c / 3) * 3;
    int count = 1;

    while(count < 10){
        if(arr[sr][sc] == ele){
            return false;
        }

        if(count % 3 != 0){
            sc++;
        }
        else{
            sr++;
            sc = (c / 3) * 3;

        }

        count++;
    }
    return true;
}
void sovle_Suduko(int arr[][9], int r, int c){
    if(r == 9 && c == 0){
        printArray(arr);
        return;
    }
   int nr = r;
   int nc = c;

   if(c == 8){
    nr++;
    nc = 0;
   }
   else{
    nc++;
   }

   if(arr[r][c] != 0){
    sovle_Suduko(arr, nr, nc);
   }
   else{

   for(int i = 1; i < 10; i++){
    if(is_Possible(arr, r, c, i) == true){
        arr[r][c] = i;
        sovle_Suduko(arr, nr, nc);
        arr[r][c] = 0;
    }
   }
   }
   

}
int main(){
    int arr[][9] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                    {5, 2, 0, 0, 0, 0, 0, 0, 0},
                    {0, 8, 7, 0, 0, 0, 0, 3, 1},
                    {0, 0, 3, 0, 1, 0, 0, 8, 0},
                    {9, 0, 0, 8, 6, 3, 0, 0, 5},
                    {0, 5, 0, 0, 9, 0, 6, 0, 0},
                    {1, 3, 0, 0, 0, 0, 2, 5, 0},
                    {0, 0, 0, 0, 0, 0, 0, 7, 4},
                    {0, 0, 5, 2, 0, 6, 3, 0, 0}};

    sovle_Suduko(arr, 0, 0);
    
    return 0;
}