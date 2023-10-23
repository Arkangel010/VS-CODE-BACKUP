#include <iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5};

    int r  = 2;
    int size = 5;
    for(int i = 0; i < r; i++){
        int prev = arr[0];
        int nxt;
        for(int j = 0; j < size; j++){
            nxt = arr[j + 1];
            arr[(j + 1) % size] = prev;
            prev = nxt;
        }
    }

    for(auto x: arr){
        cout << x << " ";
    }
    return 0;
}