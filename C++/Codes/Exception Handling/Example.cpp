
// NOTE : Nesting of try catch is allowed.
#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b ;
    cout << "Enter the no to divide : ";
    cin >> a;
    cout << "Enter the divisor : ";
    cin >> b;
    try {
        if(b > 0)
        cout << a/b;

        else 
        throw b;
    }

    catch(int a){
        cout << "Denominator is Less than Zero.";
    }
}