#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> v = {{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};
    int j;
    for(int i = 0; i < v.size(); i++){
       if(i % 2 == 0){
        j = 0;
        while(j < v.size()){
            cout << v[j][i] << " ";
            j++;
        }
        cout << endl;
       }

       else{
        j = v.size() - 1;
        while(j >= 0){
            cout << v[j][i] << " ";
            j--;
        }
        cout << endl;
        
       }
    }

    return 0;
}