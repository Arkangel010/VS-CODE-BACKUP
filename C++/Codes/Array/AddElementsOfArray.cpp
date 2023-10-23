#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
   
int main(){
    int arr1[4] = {1, 2, 3, 4};
    int arr2[4] = {1, 2, 3, 4};
    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);
    int carry = 0;
    vector<int> v;

    while(size1 > 0 && size2 > 0)
    {
        int sum = arr1[size1-- - 1] + arr2[size2-- - 1]  + carry;
        int result = sum % 10;
        v.push_back(result);
        carry = sum / 10;
    }

    while(size1 > 0 )
    {
        int result = arr1[size1-- - 1] + carry;
        carry = result / 10;
        v.push_back(result);
    }
    while(size2 > 0)
    {
        int result = arr2[size2-- - 1] + carry;
        carry = result / 10;
        v.push_back(result);
    }
    if(carry != 0)
    {
        v.push_back(carry);
    }

    reverse(v.begin(), v.end());
    for(auto x: v)
    {
        cout << x << " ";
    }
    return 0;
}