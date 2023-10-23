#include <iostream>
using namespace std;

int sum(int n)
{
    if(n < 1) return 0;
  int a ;
    if (n % 2 == 0) 
    return sum(n-1) - n;

    else
     return sum(n-1) + n ;
}
        

int main()
{
    cout << sum(5);

}