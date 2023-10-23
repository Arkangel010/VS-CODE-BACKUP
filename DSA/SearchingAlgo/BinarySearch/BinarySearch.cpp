// Applied when the data can be divided into two different search space (sets), where elements in set a is less than target element where as the elements in set b is greater than the target element or vice versa, constantly by the use of pointers we keep on breaking the array into two parts and adjust the pointers.
//Modified  Formula for calculating mid is : low Pointer + (High Pointer - Low Pointer)/2  (this is done because at higher low and high pointer value , in order to stop the overflow of the integer variable contaning the value of mid element) (Derivation - (High + Low + Low - Low)/2)
#include <iostream>
using namespace std;
int BinarySearch(int arr[], int size, int target)
{
    int s = 0;
    int e = size - 1;
    int oc = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (target == arr[mid]){
            return 1;
        }
        else if (arr[mid] > target)
            e = mid - 1;

        else if (arr[mid] < target)
        {
            s = mid + 1;
        }
    }
    cout << s << " " << e << endl;
    return oc;
}
int main()
{
    int arr[] = {2, 3, 4, 6, 7, 8, 9};
    cout << BinarySearch(arr, 8,10 );
    return 0;
}