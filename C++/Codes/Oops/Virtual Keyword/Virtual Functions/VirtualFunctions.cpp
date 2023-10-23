//By the use of virtual keyword we can make functions which is already or postdefined within a class and if the class is inherited by the other class
// then if the same function is defined within the inherited class again then it is executed and if not defined then the base class function 
//definition is executed and the virtual function can be accesed by the use of pointer(concept of late binding) of base class.
#include <iostream>
using namespace std;

class hi {

    public:

     virtual void hello(){
        cout << "hello";
    }
};

class bi : public hi{
    public:
  void hello(){
    cout<<"hello";
 }
    
};


int main(){
    hi *ptr;
    bi obj;
    ptr = &obj;
    ptr -> hello();
}