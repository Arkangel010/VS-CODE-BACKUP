#include <iostream>
using namespace std;

void findWays(int sr, int sc, int dr, int dc, string s){
    
    if(sr > dr || sc > dc) return;
    if(sr == dr && sc == dc){
        cout << s << endl;
        return;
    }

    findWays(sr + 1, sc, dr, dc, s + 'V');
    findWays(sr, sc + 1, dr, dc, s + 'H');
}

int main(){

    string s;

    findWays(0, 0, 3, 3, s);
    return 0;
}