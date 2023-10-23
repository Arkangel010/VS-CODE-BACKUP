#include <iostream>
using namespace std;


void show(int arr1[], int size, int arr2[], int size2){
    bool flag = false;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size2; j++){
            if(arr1[i] == arr2[j] && flag == false){
                cout << arr2[j] << " ";
                flag = true;
                break;
            }
        }
        flag = false;
    }
}
int main(){
  
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[3] = {1, 1, 2};
    show(arr1, 5, arr2, 3);
    


}