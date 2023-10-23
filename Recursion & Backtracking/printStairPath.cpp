#include <iostream>
#include <string>
using namespace std;

void printStairPath(int no, string str){
    if(no < 0) return;

    if(no == 0){ 

        cout << str << endl;
        return;
        }

    for(int i = 1; i < 4; i++){
        printStairPath(no - i, str + to_string(i));
    }
}
int main(){
    string str;
    printStairPath(3, str);
    return 0;
}