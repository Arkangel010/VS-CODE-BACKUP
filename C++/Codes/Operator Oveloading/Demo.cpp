#include <iostream>
using namespace std;

class hi
{
public:
    int k;
    int m;
    hi operator +(hi &obj2)
    {
        hi obj3;
        obj3.k = k + obj2.k;
        obj3.m = m + obj2.m;
        return obj3;
    }
    friend ostream & operator << (ostream &cout,const hi &obj);
    friend istream &operator >> (istream &cin, hi &obj);

    
};
ostream & operator << (ostream &cout,const hi &obj){
        cout << "KM : " <<obj.k  << endl;
        cout << "M : " << obj.m << endl;
        return cout;
    }
   
   istream &operator >> (istream &cin, hi &obj){
    cout << "Enter KM : " ;
    cin >> obj.k;
    cout << "Enter M : " ;
    cin >> obj.m;
    return cin;
   }
 

int main()
{
    hi obj1;
    hi obj2;
    hi obj3;
    cin >> obj1;
    cin >> obj2;
    obj3 = obj1 + obj2;
   cout << obj3;

    return 0;
}