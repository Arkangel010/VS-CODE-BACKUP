#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> v = {{1, 2, 3}, 
                             {4, 5, 6},
                             {7, 8, 9}};

    int totalElement = v.size() * v[0].size();
    int startingRow = 0;
    int endingColoumn = v.size() - 1;
    int endingRow = v.size() - 1;
    int startingColoumn = 0;
    int count = 0;
while(count < totalElement){
    for(int i = startingColoumn; i <= endingColoumn && count <= totalElement; i++){
        cout << v[startingRow][i];
        count++;
    }
    startingRow++;

    for(int i = startingRow; i <= endingRow && count <= totalElement; i++){
        cout << v[i][endingColoumn];
        count++;
    }
    endingColoumn--;

    for(int i = endingColoumn; i >= startingColoumn && count <= totalElement; i--){
        cout << v[endingRow][i];
        count++;
    }
    endingRow--;

    for(int i = endingRow; i >= startingRow && count <= totalElement; i--){
        cout << v[i][startingColoumn];
        count++;
    }
    startingColoumn++;
}
    return 0;
}