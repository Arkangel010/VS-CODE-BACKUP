#include <iostream>
#include <vector>
using namespace std;

class student
{
public:
   
    vector<string> category2 = {"Pocket Money : ",
                               "Hostel Fees/Flat Rent : ",
                               "Staionary Expenses : ",
                               "Shopping Expenses : ",
                               "Transportaion Expenses : ",
                               "GYM Fees :  ",
                               "Street Food Expenses : ",
                               "Telecom bill : ",
                               "Outing Expenses : ",
                               "Vacation Expenses : "};

    vector<int> value2;

    // void input(ve)
    // {
    //     int i = 0;
    //     while (i < category.size())
    //     {
    //         int j;
    //         cout << "Enter " << category[i];
    //         cin >> j;
    //         value.push_back(j);
    //         i++;
    //     }
    // }
};

// int main()
// {
//     student obj;

//     obj.input();
//     cout << obj.value[1];
//     return 0;
// }