#include <iostream>
#include <string>
using namespace std;

void subset(int arr[], int size, int iterator, string str, int sum, int targetSum){
   if(iterator == size){

    if(sum == targetSum){
        cout << str << endl;
        return;
    }
    else return;

   }

   subset(arr, size, iterator + 1, str + to_string(arr[iterator]) + " ", sum + arr[iterator], targetSum);

   subset(arr, size, iterator + 1, str, sum, targetSum);
}

int main(){
    int arr[] = {10, 20, 30, 50, 60};
    string emp;
    subset(arr, 5, 0, emp, 0, 110);
    return 0;
}