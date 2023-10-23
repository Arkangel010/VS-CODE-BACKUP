#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {1, 3, 3, 5, 3};
    // using index visiting 
    // for(int i = 0; i < v.size(); i++){
    //     v[abs(v[i]) - 1] = v[abs(v[i]) - 1] * (-1);
    // }

    // for(auto x: v){
    //     cout << x << " ";
    // }
    // cout << endl;

    // for(int i = 0; i < v.size(); i++){
    //     if(v[i] > 0)
    //     cout << i + 1 << " ";
    // }
    // using swap sorting.
    for(int i = v.size() - 1; i >= 0 ; i--){
        if(v[i] != i + 1)
        swap(v[i],  v[abs(v[i]) - 1]);
    }
    for(int i = 0; i < v.size(); i++){
        if(v[i] != i + 1)
        cout << i + 1  << " ";
    }
    return 0;
}