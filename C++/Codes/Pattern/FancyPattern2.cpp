#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int k = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 17 ; j++){
            if(j < 8 - i)
            cout << "*";

            else if(k <= 2*i + 1){
                if(k % 2 == 0)
                cout << i + 1;
                
                else 
                cout << '*';
                k++;
            }
            else{
                cout << '*';
            }
        }
        cout << endl;
        k = 0;
    }
}