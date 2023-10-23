#include <iostream>
#include <vector>
using namespace std;
int findDuplicate(vector<int>& nums) {
        int sum = nums.size() - 1;
        sum = (sum*(sum + 1))/2;
        int arsum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == nums[i + 1])
            return nums[i];
            arsum += nums[i];
        }

        for(int i = 0; i < nums.size(); i++){
            sum = sum -nums[i];
            if(sum < 0)
            return nums[i];
        }
       
        return -1; 
    }

int main(){
    vector<int> v = {1, 4, 4, 2, 3};
 
    cout << findDuplicate(v);
}



