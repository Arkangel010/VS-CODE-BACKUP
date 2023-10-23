// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    int day, month, year;
    cout << "Enter Date In form of DD/MM/YY" << endl;
    cin >> day >> month >> year;
    year = year - 1;
    year = year - (year / 400) * 400;
    int odd1 = 0;
    if (year >= 100)
    {
        int store = year / 100;
        odd1 = store * 5;
        year = year % 100;
    }

    int L, G;

    L = year / 4;
    G = year - L;

    int odd2 = 2 * L + G;
    month--;
    int dc = 0;
    for (int i = 1; i <= month; i++)
    { // no of days
        if (i % 2 != 0 && i < 8)
            dc += 31;
        else if (i == 2)
            dc += 28;
        else if (i > 7 && i % 2 == 0)
            dc += 31;
        else
            dc += 30;
    }
    int odd3 = dc + day;
    int TotalOdd = odd1 + odd2 + odd3;
    int actual = TotalOdd % 7;
    cout << actual << endl;

    switch (actual)
    {
    case 0:
        cout << "Sunday";
        break;
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    default:
        cout << "Error Contact Dev.";
    }

    return 0;
}
