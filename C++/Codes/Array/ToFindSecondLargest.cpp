#include <iostream>
using namespace std;

int main()
{
    int array[5] = {1, 2, 3, 2, 5};
    int max = 0;
    int max2 = 0;
    for (int ele : array)
    {

        if (ele > max)
            max = ele;
    }

    for (int ele : array)
    {
        if (ele == max)
            continue;
        if (ele > max2)
            max2 = ele;
    }

    cout << "The second Largest no is :" << max2;
}
