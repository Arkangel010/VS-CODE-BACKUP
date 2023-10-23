#include <iostream>
using namespace std;

void mul(int no,int k)
{
    if ( k < 1) return  ;
    int a = no;
    mul(no,k -1);
    cout << a*k << endl;
    return;
} 


int main()
{
    mul(4,4);
    return 0;
}