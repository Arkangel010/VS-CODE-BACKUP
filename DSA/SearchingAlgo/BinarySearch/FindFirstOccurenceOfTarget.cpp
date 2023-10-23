//Change within the base case , keep on comparing for previous elements after finding the target element by shifting the last pointer.

#include <iostream>
using namespace std;
int FirstOccur(int arr[], int size, int target)
{
    int s = 0;
    int e = size - 1;
    int ind;

    while(s <= e){
        int mid = s + (e - s) / 2;

        if(arr[mid] == target){
            ind = mid;
            e = mid - 1;
        }
        else if(arr[mid] < target){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ind;
}

int LastOccur(int arr[], int size, int target)
{
    int s = 0;
    int e = size - 1;
    int ind;

    while(s <= e){
        int mid = s + (e - s) / 2;

        if(arr[mid] == target){
            ind = mid;
            s = mid + 1;
        }
        else if(arr[mid] < target){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ind;
}

int missingElement(int arr[] , int size){
        int s = 0;
        int e = size - 1;

        while(s <= e){
            int mid = s +(e - s) / 2;

            if(arr[mid] == mid + 1){
                s = mid + 1;
            }

            else{
                return mid + 1;
            }
        }
        return -1;
}
int main()
{
    int arr[] = {2, 5, 5, 5, 6, 6, 6, 9, 9, 9, 9};

    int arr1[] = {1, 2, 3, 4, 5, 6};
    cout << LastOccur(arr, 11, 5) << endl;
    int a = 6;
    cout << "Total Occurence : " << LastOccur(arr, 11, a) - FirstOccur(arr, 11, a) + 1 << endl;

    cout << missingElement(arr1, 7) << endl;

    return 0;
}