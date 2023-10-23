#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr {2, 1, 4, 3, 6, 5, 7, 9, 8};
    int target = 8;
    int s = 0;
    int e = arr.size() - 1;

    while(s <= e){
        int mid = s + (e - s) / 2;
        if(arr[mid] == target){
            cout << "found";
            break;
        }

        if(mid > 0 && arr[mid - 1] == target){
            cout << "found";
            break;
        }

        if(mid < arr.size() - 1 && arr[mid + 1] == target){
            cout << "found";
            break;
        }

        if(arr[mid] > target){
            e = mid - 2;
        }
        
        if(arr[mid] < target){
            s = mid + 2;
        }

    }
}