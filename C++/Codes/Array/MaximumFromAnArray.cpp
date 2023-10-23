#include <iostream>
using namespace std;

int main()
{
    int Array[5] = {5,2,2,3,4};
    int max = 1;
    int min = Array[1];

    

      for(int ele : Array)
      {
        
        if(ele > max)
        max = ele;
        
        if(ele < min)
        min = ele;

     } 

    cout << "The max is : " << max;
    cout << "The min is : " << min; 

    return 0;
}