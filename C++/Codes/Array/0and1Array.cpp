#include <iostream>
#include <vector>
using namespace std;
    void sort(vector<int> &v){
        int start = 0;
        int end = v.size() - 1;
        
        while( start <= end){
            if(v[start] == 0){
                start++;
            }
            if(v[end] == 1){
                end--;
            }
            else
            swap(v[start], v[end]);
        }
    }
int main(){
    vector<int> v = {0, 1, 1, 0, 0, 1, 0, 0, 0};
    sort(v);
    for(auto x: v){
        cout << x << " ";
    }

}