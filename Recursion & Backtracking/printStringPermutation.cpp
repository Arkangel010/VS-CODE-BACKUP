#include <iostream>
#include <string>

using namespace std;

void permutation(string str, string emp){
    if(str.size() == 0){
        cout << emp << endl;
        return;
    }

    for(int i = 0; i < str.size(); i++){
        string st = str.substr(0, i) + str.substr(i + 1, str.length() - 1);
        permutation(st, emp + str[i]);
    }
}

int main(){
    string str = "abc";
    string emp;
    permutation(str, emp);
}