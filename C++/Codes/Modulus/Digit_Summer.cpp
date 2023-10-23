#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter";

    int sum = 0;

    cin >> a;

    while (a != NULL)
    {
        sum = sum + a % 10;
        a = a / 10;
    }

    cout << sum;
    return 0;
}