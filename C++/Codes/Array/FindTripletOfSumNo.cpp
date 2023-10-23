#include <iostream>
using namespace std;

int main()
{
    int array[5] ={1,2,3,4,5};
    int count = 0;
    for(int i = 0 ; i < 5 ;i++)
    {
        for(int j = i+1; j < 5 ; j++)
        {
            for (int k = j+1 ; k < 5 ; k++)
            {
                if( array[i] + array[j] + array[k] == 6)
            {
                count++;
            }
            
            }
        }
    }
    cout << "The no of triplets are :" << count;
    return 0;
}