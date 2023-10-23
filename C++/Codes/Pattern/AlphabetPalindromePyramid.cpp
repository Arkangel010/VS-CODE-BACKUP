#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    char a = 96;
    

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < 2*i + 1; j++){
            if(j <= i){
                a++;
                cout << a;
                
            }
            else if(j > i){
                a --;
                cout << a;
            }
        }
        cout << endl;
        a = 96;
    }
  
    return 0;
}