#include <iostream>
using namespace std;

int main()
{
    int no ;
    cout << "Enter the no! ";
    cin >> no;
    int reverse = 0;

    while (no != NULL)
    {
      
            reverse = reverse*10 + (no % 10);
            no = no / 10;
       
    
        }
    
    cout << "The Reverse of No is: " << reverse;
    return 0;
}