#include <iostream>
using namespace std;

int *partition(int rrp[], int size)
{
    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size - 2; j++)
        {
            if (rrp[j] < rrp[size - 1])
            {
                swap(rrp[i], rrp[j]);
                break;
            }
        }
    }
        return rrp;
}

int main()
{

    int arr[] = {10, 6, 9, 1, 8};
    int *ar = partition(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}