#include <iostream>
#include <string>
using namespace std;

void pattern(int n, int b, string s){
    if(b > n) return;

    if(b == n){
        cout << s << endl;
        return;
    }

    pattern(n, b + 1, s + 'V');
    pattern(n, b + 2, s + "HH");
}

int noOfWays(int n){
    if(n < 0) return 0;

    if(n == 0 || n == 1){
        return 1;
    }
    if(n == 2) return 2;



    return noOfWays(n - 1) + noOfWays(n - 2) + noOfWays(n - 3) + noOfWays(n - 4) + noOfWays(n - 5) + noOfWays(n - 6);
}

int main(){
  
   cout << noOfWays(3);

    
    return 0;
}