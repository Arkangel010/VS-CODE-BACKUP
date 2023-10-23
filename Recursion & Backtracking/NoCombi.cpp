#include <iostream>
#include <string>
using namespace std;

void combi(string no, int c, string s){
    if(c > no.length()) return;

    
    if(c > 0){
        cout << s << endl;
    }
      
    
    for(int i = 0; i < no.length(); i++){
        combi(no, c + 1, s + no[i]);
    }
    

}
int main(){
    string no = "123";
    string s;

    combi(no, 0, s);
    return 0;
}