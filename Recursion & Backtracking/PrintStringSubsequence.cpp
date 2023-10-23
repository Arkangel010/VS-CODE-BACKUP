#include <iostream>
using namespace std;

void printSubsequence(string str, string emp){

    if(str.length() == 0){
        cout << emp << endl;
        return;
    }
    printSubsequence(str.substr(1, str.length() - 1), emp + str[0]);

    printSubsequence(str.substr(1, str.length() - 1), emp);
}

int main(){
    string str = "abc", emp;

    printSubsequence(str, emp);
    return 0;
}