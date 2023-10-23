//Three Pointer Approach. 
// 1. Red , 2. Blue , 3. Green
#include <iostream>
#include <vector>
using namespace std;
 
int main(){
     vector<int> v = {1, 0, 2, 1};
    int l = 0, m = 0;
    int h = v.size() - 1;
    int i = 0;
    while(m <= h){
        if(v[m] == 0){
            swap(v[m], v[l]);
            l++;
            m++;
     
        }
        else if(v[m] == 1){
            swap(v[m], v[m]);
            m++;
          
        }
        else if(v[m] == 2){
            swap(v[m], v[h]);
            h--;         
        }
      
    }
    for(auto x: v){
        cout << x << " ";
    }

}