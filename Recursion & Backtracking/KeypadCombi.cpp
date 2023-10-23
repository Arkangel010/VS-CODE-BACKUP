// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> keyCombi(string str, string arr[]){
    
    if(str.length() == 0){
        vector<string> st;
        st.push_back(" ");
        return st;
    }
    
    vector<string> sa = keyCombi(str.substr(1, str.length() - 1), arr);
    int size = sa.size();
    vector<string> ans;
    for(int i = 0; i < arr[(int(str[0]) - 48)].size(); i++){
        for(int j = 0; j < size; j++){
            ans.push_back(arr[int(str[0]) - 48][i] + sa[j]);
        }
    }
    
    return ans;
}
int main() {
    
    string str = "57";
    string arr[] = {"?!","abc", "def", "ghi", "jkl", "mnop", "qrst", "uv", "wxyz", ".;"};
    vector<string> ans = keyCombi(str, arr);
    
    for(auto x: ans){
        cout << x << endl;
    }
    return 0;
}