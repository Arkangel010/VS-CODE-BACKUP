#include <iostream>
#include <string>
using namespace std;


void permutation(string str, int cp, int ip, string emp){
    if(ip > str.length() || cp > str.length()) return;

     emp = str;
    swap(emp[cp], emp[ip]);

    if(ip < str.length()){
        cout << emp << endl;
    }
   

    permutation(str, cp, ip + 1, emp);

    permutation(str, cp + 1, cp + 1, emp);

}
int main(){

    string str = "ab";

    string emp;

   
    permutation(str, 0, 0, emp);
    return 0;
}
