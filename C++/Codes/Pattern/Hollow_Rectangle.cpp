#include <iostream>
using namespace std;

int main()
{
    int l ;
    int w ;
   cout<< "Enter the length of Rectangle! ";
    cin>> l;
    cout<<"Enter the Width of Rectangle! ";
    cin>> w; 

    for (int a = 0; a < l; a++)
    {
        for(int b = 0; b < w;b++){

            if (a == 0 || b == 0 || a == (l-1) || b == (w-1) )
            cout<<"*";
           
            else
            cout<<" ";

        }
       cout<<endl;         
    }
    return 0;
}