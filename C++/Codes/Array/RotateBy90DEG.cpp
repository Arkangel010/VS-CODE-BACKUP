//first tanspose and then interchange row and coloumn.
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> v = {{1, 2, 3},
                              {4, 5, 6},
                              {7, 8, 9}};

    int k = v.size() - 1;

    for(int i = 0; i < v.size() - 1; i++){
        for(int j = 0; j < v.size(); j++){
            swap(v[i][j], v[j][k]);
           
        }
        cout << endl;
        k--;
    }   

    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[0].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }                    
}