#include <iostream>
using namespace std;

main()
{
    int no;
    int power;

    cout << "Enter the No :";
    cin >> no;

    cout << "Enter the Power :";
    cin >> power;

    int sum = 1;

    for (int i = 1; i <= power; i++)
    {
        sum *= no;
    }

    cout << "The no is: " << sum;

    return 0;
}