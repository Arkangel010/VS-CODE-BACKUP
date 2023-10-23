#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int a = 20;
    int carry = 0;
    vector<int> v = {1};

    for(int i = 2; i <= a; i++){
        int j = 0;
        int s = v.size();
            while(j < s){
                int result = v[j] * i + carry;
                v[j] = result % 10;
                carry = result / 10;      
                if(carry != 0 && j + 1 == s){
                     v.push_back(carry);  
                     carry = 0;
                }  
                    
                j++;
            }
    }

    reverse(v.begin(), v.end());
    for(auto x: v){
        cout << x << " ";
    }
    return 0;
}