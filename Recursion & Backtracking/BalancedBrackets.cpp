#include <iostream>
#include <string>
using namespace std;

void combi(int n, int ob, int cb, string emp){
    if(ob == n && cb == n){
        cout << emp << endl;
        return;
    }

    if(ob < n){
        combi(n, ob + 1, cb, emp + '(');
    }
    if(cb < ob){
        combi(n, ob, cb + 1, emp + ')');
    }
}
int main(){
    string s;
    combi(2, 0, 0, s);

    return 0;

}