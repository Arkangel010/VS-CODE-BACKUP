#include <iostream>
using namespace std;

void printWays(int arr[][5], int sc, int sr, int dc, int dr, string emp, bool visited[][5]){
    
    
    if(sc < 0 || sr < 0 || sc == dc || sr == dr || arr[sr][sc] == 1 || visited[sr][sc] == true){
        return;
    }
    if(sc == dc - 1 && sr == dr - 1 ){
        cout << emp << endl;
        return;
    }

    visited[sr][sc] = true;

        printWays(arr, sc, sr - 1, dc, dr, emp + "UP ", visited);
    

  
        printWays(arr, sc, sr + 1, dc, dr, emp + "Down ", visited);
  

  
        printWays(arr, sc - 1, sr, dc, dr, emp + "Left ", visited);
    

    
        printWays(arr, sc + 1, sr, dc, dr, emp + "Right ", visited);
    
    visited[sr][sc] = false;
    
}
int main(){
    int arr[3][5]  ={ {0, 1, 0, 0, 1},
                   {0, 0, 0, 1, 0},
                   {1, 0, 0, 0, 0}};
    bool visited[3][5] = {false};
    string emp;
   
    printWays(arr, 0, 0, 5, 3, emp, visited);
    
    
    
    return 0;
}