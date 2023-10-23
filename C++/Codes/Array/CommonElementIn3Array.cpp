#include <iostream>
#include <vector>
using namespace std;
void common(vector<int> &a, vector<int> &b, vector<int> &c){
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < b.size(); j++){
            if(a[i] == b[j]){
                for(int k = 0; k < c.size(); k++){
                    if(a[i] == c[k]){
                    cout << c[k] << " ";
                    break;
                    }
                }
        
            }
      
        }
    }
}
int main(){
    vector<int> c = {2, 3, 4};
    vector<int> a = {2, 3, 4};
    vector<int> b = {2, 3, 4};
 

    if(a.size() < b.size() && a.size() < c.size())
    common(a, b, c);

    else if(b.size() < a.size() && b.size() < c.size())
    common(b, a, c);

    else 
    common(c, a, b);
    return 0;
}