#include <iostream>
#include<iomanip>
using namespace std;

int main(){
   int a = 10 ;

   cout.width(5);
  cout.setf(ios :: left, ios:: adjustfield);
  cout.unsetf(ios::left);
   cout << a << 5 ;
}