#include <iostream>
#include <vector>
using namespace std;

vector<string> seq(string str){

    if(str.length() == 0){
        vector<string> vec;
        vec.push_back(" ");
        return vec;
    }

    string rem = str.substr(1, str.length() - 1);
    vector <string> prv = seq(rem);

    int size = prv.size();
    for(int i = 0; i < size; i++){
        prv.push_back(str[0] + prv[i]);
    }
    return prv;
}
int main(){
    string str = "abc";
    vector<string> ans = seq(str);

    for(auto x: ans){
        cout << x << endl;
    }
    return 0;
}