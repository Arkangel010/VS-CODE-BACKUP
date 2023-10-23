#include <iostream>
#include <vector>
using namespace std;

int main(){
     vector<int> arr{1, 2, 4, 6, 8, 10};
     int x = 7;
      int s = 0;
        int e = arr.size() - 1;
        int cloInd = e;
        while(s <= e){
            int mid = s +(e - s)/2;
            
            if(arr[mid] >= x){
                cloInd = mid;
                e = mid - 1;
            }
            else if(arr[mid] < x){
                s = mid + 1;
            }
            else if(arr[mid] > x){
                e = mid - 1;
            }
            
        }
        cout << arr[cloInd];
       
        
}