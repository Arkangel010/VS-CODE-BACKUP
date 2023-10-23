/* A class which contains atleast one pure Virtual Function is reffered to as Abstract class.
Object of An abstract class cant be created ,but pointers and references can be created. It can have constructors.
And if the inherited class doesn't overide the Pure virtual Function then it also becomes abstract class.*/

#include <iostream>
using namespace std;

class abs{
    public:
    virtual int  sum(int , int) = 0;
};

class c1 : public abs{
    public:
    int sum(int a, int b){
        return a + b;
    }
};

int main(){
    c1 obj;
    cout << obj.sum(5, 6);
    return 0;
}