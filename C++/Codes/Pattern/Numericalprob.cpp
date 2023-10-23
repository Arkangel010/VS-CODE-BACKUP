#include <iostream>
using namespace std;

int main()
{
    int a = 7; //no of terms
    int r = 7;
    int b = 1;
   for(int j = 1; j <= r ; j++){
     b = j;   
    for (int i = 1; i <= a; i++)
    {
        
        cout << b;
        b++;
        if( b > 7)
        b = 1;

    }
    cout << endl;
    
   }
}