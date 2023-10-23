#include <iostream>
using namespace std;

string remove (string ar,int no ,int l){
    if (l == 0) return 0;
    string s;
    if ( no == l-1 && ar[no] != 'a') return s += ar[no];
    
    if( ar[no] == 'a'){
        s += remove(ar,no + 1,l);
    }
    else
       s = ar[no] + remove(ar , no + 1 , l);

      return s;

}

int main(){
    string ar = "haaao";
    int a = 0;
    int b  = 5;
    cout << remove(ar,a,b);
}