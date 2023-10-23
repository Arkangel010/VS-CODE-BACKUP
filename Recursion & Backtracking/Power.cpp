#include <iostream>
using namespace std;

int power(int n, int p){
    if(p == 1)
    return n;

    if(n == 1)
    return n;

    //return n * power(n, p - 1); T = O(n)
    return power(n, p/2) * power(n, p/2); //  T = O(log n)
}

int main(){
    cout << power(1, 3);
    return 0;
}