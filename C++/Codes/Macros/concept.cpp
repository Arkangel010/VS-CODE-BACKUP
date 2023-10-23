// As we know that integer datatype is made up of 4 bytes which is equal to 32 bits, means it can store value up to the limit of 2 ^ 30 int +Ve and negative as well , so we can refer it to the maximum or minimum value of the integer datatype , these values are defined and stored within the macros(constant Variables) named: 
// (i) INT_MIN -  Stores minimum value the integer datatype can store.
// (ii)INT_MAX - Stores maximum value the integer can store.

#include <iostream>
using namespace std;

int main(){
    cout << INT64_MIN << endl;
    cout << INT64_MAX;
}