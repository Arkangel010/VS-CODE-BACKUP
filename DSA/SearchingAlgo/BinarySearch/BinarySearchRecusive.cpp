#include <iostream>
using namespace std; 
int RecurBinarySearch(int arr[],int fp, int lp,int target){
    int mid = (fp + lp)/2; //base case 
    if(fp >= lp)
    return -1;
    if(arr[mid] == target) // base case 
    return 1;
    if(arr[mid] < target){
        lp = mid -1;
        return RecurBinarySearch(arr,fp,lp,target); // assumption 
    }
    else if(arr[mid] > target){
        fp = mid + 1;
        return RecurBinarySearch(arr,fp,lp,target);
    }

    return -1; //self work
}
int main(){
    int hi[] = {1,2,3,4};
    cout << RecurBinarySearch(hi,0,3,20);
    return 0;
}