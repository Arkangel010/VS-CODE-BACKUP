#include <iostream>
using namespace std;

void printCombi(string arr[], string str, string emp){
    if(str.length() == 0){
        cout << emp << endl;
        return;
    }
    for(int i = 0; i < arr[int(str[0] -  48)].length(); i++){
       
    printCombi(arr, str.substr(1, str.length() - 1), emp + arr[int(str[0]) - 48][i]);

    }
}

int main(){
    string arr[] = {"?!","abc", "def", "ghi", "jkl", "mnop", "qrst", "uv", "wxyz", ".;"};
    string str = "47";
    string emp;
   
     printCombi(arr, str, emp);
}