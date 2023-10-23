#include <iostream>
using namespace std;

int partition(int rrp[], int f,int l)
{
    int a = 0;
    for (int i = f -1; i < l-1; i++)
    {

        for (int j = i+1; j <= l- 2; j++)
        {
            if (rrp[j] < rrp[l - 1])
            {
                swap(rrp[i], rrp[j]);
                a = i;
                break;
            }
        }
    }
    if(a == 0 && rrp[a] < rrp[l-1]){
        a ++;
    }
   
     swap(rrp[a],rrp[l-1]);
  
        return a+1;
    
}

void QuickSort(int f,int l, int arr[]){
        if(f >= l)
        return;
    int a =  partition(arr,f,l);
    QuickSort(f,a-1,arr);
    QuickSort(a+1,l,arr);
}

int main()
{

    int arr[] = {10, 6, 9, 1,5,2};
   QuickSort(1,5,arr);
     for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
    
}