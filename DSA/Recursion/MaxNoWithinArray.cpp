#include <iostream>
using namespace std;

int rax(int ar[],int no,int l){
    if(l == 0) return 0;
    if(l == 1) return ar[no -1];
    if(no == l-1) return ar[no];
    return max(ar[no],rax(ar,no +1,l)) ;
}

int main(){
    int ar[5] = {1,2,5,4,3};
    int a = 0;
    int b = 5;
    cout << rax(ar,a,b);

    return 0;
}