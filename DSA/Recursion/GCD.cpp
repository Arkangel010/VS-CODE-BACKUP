// Use Euclids Algorithm - If we subtract a smaller no from a larger no,(we can reduce the large no) but the gcd will not change.
// Gcd of (54,18) = Gcd of (36,18)
        // a , b   =      ((a-b),b)   {a > b}
// Gcd of (54,20) = Gcd of (20,14)
        // a , b   =       (b,a%b)     {a > b}

#include <iostream>
using namespace std;

int gcd(int a ,int b){
    if( b > a ) return gcd(b,a);
    if ( b == 0) return a;
    return gcd (b, a%b);
}

int main(){
    cout << gcd(40,48);
    return 0;
}

