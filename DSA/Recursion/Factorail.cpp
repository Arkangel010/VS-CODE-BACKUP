#include <iostream>
using namespace std;

    int fact(int n)
    {
       int b ;
       if (n == 1) return 1;
       b = n *fact(n-1);
       
       return b;
    
    }

    int main(){
        cout << fact(5);
        return 0;
    }
