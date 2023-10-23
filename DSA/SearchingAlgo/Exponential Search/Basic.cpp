#include <iostream>
#include <vector>

using namespace std;
int min(int a, int b){
    if(a > b) return b;
    else return a;
}
int main(){
    vector<int> v{1, 2, 3, 5, 6, 7, 8};
    int target = 8;
    
    int i = 1;
    if(v[0] == target){
        cout << 0;
        return 0;
    }
    while(i < v.size() && v[i] <= target){
        i = i * 2;
    }

    int s = i/2;
    int e = min(i, v.size() - 1);
    int index = -1;
    while(s <= e){
        int mid = s +(e - s)/2;

        if(v[mid] == target){
            index = mid;
            cout << index;
            return 0;
        }
        else if(v[mid] > target){
            e = mid - 1;
        }
        else if(v[mid] < target){
            s = mid + 1;
        }

    }

    return 0;
}