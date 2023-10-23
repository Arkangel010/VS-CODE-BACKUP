#include <iostream>
using namespace std;
void printer(int arr[], int i, int l)
{
    if (i >l - 1)
        return;
    cout << arr[i] << " ";
    printer(arr, i + 1, l);
}
int main()
{
    int arr[5] = {0, 5, 0, 3, 42};
    for (int j = 0; j < 5; j++){
        int flag;
        for (int i = 0; i < 5 - j - 1; i++)
        {
            if (arr[i + 1] != 0 && arr[i] == 0)
                swap(arr[i + 1], arr[i]);
            
                flag = true;       
                 }
                 if(flag == false)
                 break;
    }

     /*for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    } */
    printer(arr,0,5);

    return 0;
}