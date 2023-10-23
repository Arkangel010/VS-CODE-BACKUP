#include <iostream>
using namespace std;

main()
{
    int no;

    cout << "Enter the No: ";

    cin >> no;

    int fact = 1;

    for (int i = 1; i <= no; i++)
    {

        fact *= i;
    }
    cout << "The factorial is : " << fact;

    return 0;
}