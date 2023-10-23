#include <iostream>
using namespace std;

void printOrder(int n, int i){
    if(i > n){
        return;
    }
    cout << i << endl;

    for(int j = 0; j < 10; i++){
        printOrder(n, i * 10 + j);
    }
}
int main(){
    for(int i = 0; i < 10; i++){
         printOrder(10, i);
    }
   
    return 0;
}