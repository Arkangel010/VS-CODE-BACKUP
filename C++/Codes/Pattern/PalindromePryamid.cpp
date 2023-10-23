#include <iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;
    int k = 0;
    int e = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2*n + 1; j++){
            if(j < n - i - 1)
            cout << " ";
            
            else if(j < n + i){
                if(e <= i){
                cout << ++k;
                }

                else{
                    cout << --k;
                }
                e++;
            }
            else 
            cout << " ";
        }
        k = 0;
        e = 0;
        cout << endl;
    }
}