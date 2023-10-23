#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr{1, 1, 2, 2, 1, 1, 5};


    int s = 0;
    int e = arr.size() - 1;

    while (s < e){
        int mid = s + (e - s)/2;
            if(mid % 2 == 0 && arr[mid] == arr[mid + 1]){
                s = mid + 2;
            }
            else if(mid % 2 == 0 && arr[mid] == arr[mid - 1]){
                e = mid - 2;
            }
            else if(mid % 2 != 0 && arr[mid] == arr[mid + 1]){
                e = mid - 1;
            }
            else if(mid % 2 != 0 && arr[mid] == arr[mid - 1]){
                s = mid + 1;
            }
            else{
                s = mid;
            }
        
    }

    cout << arr[s];


}