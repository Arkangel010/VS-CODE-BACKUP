#include <iostream>
using namespace std;

void combi(int n, int t, string s){
    if(t > n) return;

    if(t == n){
        cout << s << endl;
        return;
    }

    combi(n, t + 1, s + '1');
    combi(n, t + 2, s + '2');
    combi(n, t + 3, s + '3');
    combi(n, t + 4, s + '4');
    combi(n, t + 5, s + '5');
    combi(n, t + 6, s + '6');
}
int main(){

    string s;
    combi(8, 0, s);
    return 0;
}