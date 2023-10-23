#include <iostream>
using namespace std;

// the max element is shifted to the end of array and preceiding max elements are shifted to the right of the array by comparing two adjacent elements and swapping the values.
//Repeatedly swap two adjacent elements if in wrong order.
//Time complexity: O(n^2)
//Stable Sorting Algo
int main()
{
    int arr[5] = {1, 4, 2, 5, 3};
    for (int j = 0; j < 5; j++)
    {
        bool flag;
        for (int i = 0; i < 5 - j - 1; i++)
        {

            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                flag = true;
            }
        }
        if (flag == false)
            break;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}