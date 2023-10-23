#include <iostream>
using namespace std;
 
template <class T>
T sum(T a , T b){
    return a + b;
}
int main(){
     int a,b;
     float c,d;
     cout << "enter value of a " << endl;
      cout << "enter value of b " << endl;
      cout << "enter value of c " << endl;
      cout << "enter value of d " << endl;

    cin >> a >> b >> c >> d;
    cout << endl;
   cout << sum(a,b) << endl;
 
   return 0;
}