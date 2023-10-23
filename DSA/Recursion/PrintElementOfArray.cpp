#include <iostream>
using namespace std;

int print (int ar[],int a ,int b){
    if(b == 0 )
    return 0;
    if( a == b) return ar[a-1];
    int d = ar[a];
    cout << d << endl;
    return print(ar,a + 1,b);
}

int main()
{
    int ar[7] = {1,2,3,4,5,8,9};
    print(ar,0,7);
    
    return 0;
}