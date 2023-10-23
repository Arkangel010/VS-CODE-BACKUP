#include <iostream>
using namespace std;

int rev(int n){
    if(n / 10 < 10) return n;
    if(n < 10) return n;
    int a = 0 ;
    a +=  ( n%10)*10 + rev(n/10);
    return a;
   
    
   
}
int main(){

    // //cout << rev(546);
    // char a = 'a';
    // char b = 'b';
    // char c = a + b;
    // cout << c;
    string g;
    string h = "hi hi";
    string *ptr = &h;
    g = *ptr;
    cout << g;
    return 0;
}