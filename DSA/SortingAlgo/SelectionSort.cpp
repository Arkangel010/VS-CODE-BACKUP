#include <iostream>
using namespace std;
//considering the first element to be the minimum element and comparing it with the rest element and after that swapping them by reapeting the process considering the second element and so on.
//Repeatedly find min element in unsorted array & place it at beginning."
//Time Complexity: O(n ^ 2)
// Not stable sorting algo
int main(){
    int arr[5] = {5,8,4,9,2};
    for(int i = 0; i < 5 ; i++){
        int min = arr[i];
        int id;
        for(int j = i + 1 ; j < 5; j++){      
            if(arr[j] < min){
            min = arr[j];
            id = j;
            }
            
        }
        swap(arr[i],arr[id]);
        
    
}
    for (int i = 0; i < 5; i++)
    {
           cout << arr[i] << " ";
    }
    
    return 0;
}