#include<iostream>
using namespace std;
float sum(int a , int b , int c){
         float d = a+b+c;
         float e = d/3;
         return e;
}
int main(){
    int a; int b; int c;
    cin >>a >> b >> c;
    cout << sum(a,b,c);
    return 0;
}