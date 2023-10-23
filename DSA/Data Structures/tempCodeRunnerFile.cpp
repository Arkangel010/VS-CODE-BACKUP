#include <iostream>
using namespace std;


string reverse(int len, string s){

        if(len == 1)
        return s;
        s = s.substr(len);
        reverse(len -1,s );
           
        
       
        
    }

    int main(){
       string s = reverse(5, "hello");
       
       cout << s;
        return 0;
    }