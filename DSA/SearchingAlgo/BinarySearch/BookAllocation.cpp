#include <iostream>
#include <vector>
using namespace std;
bool checker(vector<int> &arr, int max, int std){
        int noOfBooks = arr.size() - 1;

        int i = 0, j = 0;
        int pages = 0;
        while(i <= noOfBooks){
            if(pages + arr[i] <= max){
                pages += arr[i];
            }
            else if(pages + arr[i] >= max && arr[i] <= max && j < std - 1){
                j++;
                pages = arr[i];
            }
            else return false;
            i++;
        }
        return true;
       
}
int main()
{
    vector<int> v{20, 34, 67, 90};
    int student = 1;
    int s = 0;
    int sum = 0;
    if(student > v.size() - 1){
        return -1;
    }
    for(int i = 0; i < v.size(); i++){
        sum += v[i];
    }
    int e = sum;
    int ans;
    while(s <= e){
        int mid = s +(e - s)/2;
        if(checker(v, mid, student)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }

    cout << ans;
    return 0;
}
