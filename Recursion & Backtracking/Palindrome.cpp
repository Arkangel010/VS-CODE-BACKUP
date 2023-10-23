#include <iostream>
using namespace std;

bool isPalindrome(string s,int f, int l){
         if(f >= l) return true;
        if(s[f] != s[l]) return false;
       
     isPalindrome(s, f + 1, l -1);
}

int main(){
    if( isPalindrome("hih", 0, 2))
    cout << "true";
    else 
    cout << "false";
    return 0;
}