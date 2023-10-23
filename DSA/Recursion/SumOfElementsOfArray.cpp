#include <iostream>
using namespace std;

int summer(int ar[],int no,int l){
    if( l == 0) return 0;
    if( no == l-1) return ar[no];
    
    return ar[no] + summer(ar,no + 1,l);
}

int main(){
    int ar[5] = {1,2,6,4,5};
    int a = 0;
    int b = 5;
    cout << summer(ar,a,b);

    return 0;
}