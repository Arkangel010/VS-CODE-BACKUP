#include <iostream>
using namespace std;
void seq(int n)
{
    if( n < 1) return ;
    seq(n-1);
    cout << n << "  ";
    return ;
}
int main()
{
    int a = 19;
    seq(a);
}