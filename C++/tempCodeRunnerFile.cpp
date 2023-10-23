#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> fun(string str, int index, vector<string> &ans){
    if(index == str.length()){
        ans.push_back(" ");
        return ans;
    }
    
    vector<string> sv = fun(str, index + 1, ans);
    int size = sv.size();
    for(int i = 0; i < size; i++){
        sv.push_back(str[index] + sv[i]);
    }
    return sv;
}


int* ind(int arr[], int size, int no, int index, int count){
    if(index > size){
        return new int[count];
    }
    if(arr[index] == no){
        int *ar = ind(arr, size, no, index + 1, count + 1);
        ar[count] = index;
        return ar;
    }
    else{
        int *ar = ind(arr, size, no, index + 1, count);
        return ar;
    }
}
int main() {
    // int arr[] = {1, 2, 2, 1};
    // int* ar;
    // ar = ind(arr, 3, 2, 0, 0);
    
    // int size = sizeof(ar)/sizeof(int);
    
    // for(int i = 0; i < size; i++){
    //     cout << ar[i] << " ";
    // }
    vector<string> ans;
    string str = "abc";
    ans = fun(str, 0, ans);

    for(auto x: ans){
        cout << x << endl;
    }
    return 0;
}