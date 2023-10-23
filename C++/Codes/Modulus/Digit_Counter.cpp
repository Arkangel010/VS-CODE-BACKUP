#include <iostream>
using namespace std;

main()
{
    int no;
    cout << "Enter ";
    cin >> no;
    int count = 0;

    while (no != NULL)
    {
        count++;
        no = no / 10;
    }
    cout << "No of Digits:" << count;
    return 0;
}