#include <iostream>
using namespace std;

int main(){
    int n;
    int bit;
    cin >> n;
    cin >> bit;
     int helper = 1 << bit;

    n = n | helper;
    cout << n;
    return 0;
}