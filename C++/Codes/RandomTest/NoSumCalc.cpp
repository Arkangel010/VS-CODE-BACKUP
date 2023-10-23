#include <iostream>
using namespace std;
 class hello{
    public:
int summer(int a);
 };

 
int main(){
    hello obj1;
    int a = obj1.summer(545);
    cout << a;
    return 0;
}
int hello ::summer(int a){
     if(a%10 == a) return a;
    return  a%10 + summer(a/10);
 }