#include <iostream>
using namespace std;
//concept of Array Manupulation
int main()
{
    int array[5] = {1, 2, 1, 4, 2};

    for (int i = 0; i < 5; i++)
    {
         bool flag = false;
        if (array[i] == 0)
            continue;
       
        for (int j = i + 1; j < 5; j++)
        {
            if (array[j] == 0)
            continue;
            if (array[i] == array[j])
            {
                array[j] = 0;
                flag = true;
            }
        }
        if (flag == true)
            array[i] = 0;
    }

    for (int ue : array)
    {
        if (ue != 0)
            cout << "The no is " << ue;
    }
    return 0;
}