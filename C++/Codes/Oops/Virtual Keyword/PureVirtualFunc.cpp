//By the use of vitual keyword we just declare the function in base class and each inherted class needs to implement the function
 //on individual basis as well as the base class object cant be created.
#include <iostream>
using namespace std;

class base{
public:

    virtual void print() = 0;
    int a = 10;
};

class c1 : public base{
    public:
    void print(){
        cout << "c1";
    }

};
class c2 : public base{
    public :
    void print(){
        cout << "c2";
    }
};
int main(){
   c2 * ptr; 
   c2 obj;
   ptr = &obj;
   ptr -> print();
   
    
return 0;
}