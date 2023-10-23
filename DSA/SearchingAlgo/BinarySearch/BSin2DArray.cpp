#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> v{ {1, 2, 3},
                           {4, 5, 6}, 
                           {7, 8, 9} };
    
    int total = v.size() * v[0].size();
    int target = 9;
    int s = 0;
    int e = total - 1;

    while (s <= e)
    {
        int mid = s +(e - s)/2;

        if(v[mid / v[0].size()][mid % v[0].size()] == target){
            cout << v[mid / v[0].size()][mid / v[0].size()];
            break;
        }
        if(v[mid / v[0].size()][mid % v[0].size()] > target){
            e = mid - 1;
        }
        else if(v[mid / v[0].size()][mid % v[0].size()] < target){
            s = mid + 1;
        }
    }
    return 0;
}