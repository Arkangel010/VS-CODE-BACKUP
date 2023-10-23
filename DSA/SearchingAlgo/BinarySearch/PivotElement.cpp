#include <iostream>
#include <vector>
using namespace std;
int search(vector<int>& nums, int target) {
         int s = 0;
         int e = nums.size() - 1;
         int pi;
    while(s <= e){
        int mid = s + (e - s)/2;
        if(e == s){ 
            pi = s;
            break;
        }
        else if(nums[mid] > nums[mid + 1]){
            pi = mid;
            break;
        }
        else if(nums[mid] >= nums[s] && nums[mid] < nums[mid + 1]){
            s = mid + 1;
        }
        else if(nums[mid] < nums[s]){
            e = mid - 1;
        }
       
    }

    if(target < nums[e]){
         s = pi + 1;
         e = nums.size() - 1;  
    }
    else{
         s = 0;
         e = pi;
    }

     while(s <= e){
            int mid = s +(e - s)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                e = mid - 1;
            }
            else if(nums[mid] > target){
                s = mid + 1;
            }
        }
        return -1;

    
     
    }

int main(){
    vector<int> v = {1, 3};

    int s = 0;
    int e = v.size() - 1;

    search(v, 0);
    return 0;
}