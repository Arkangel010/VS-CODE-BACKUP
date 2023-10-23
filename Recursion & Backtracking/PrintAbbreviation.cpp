#include <iostream>
using namespace std;

void printAbbreviation(string str, int pos, int count, string emp){
    if(pos == str.length()){
        if(count == 0){
            cout << emp << endl;
        }
        else{
            cout << emp << to_string(count) << endl;
        }
        return;
    }

    if(count > 0){
        printAbbreviation(str, pos + 1, 0, emp + to_string(count) + str[pos]);
    }
    else{
        printAbbreviation(str, pos + 1, 0, emp + str[pos]);
    }
    printAbbreviation(str, pos + 1, count + 1, emp);
}
int main(){

    string str = "pep";
    string emp;

    printAbbreviation(str, 0, 0, emp);
    return 0;
}