/* Similar to packages within java, Used to create classes with same name and overcome the problem of conflicting names as well as
 using the various standard library template by the help of scope resolution operator. 
Syntax : 
    1.create namespace and in that create class.
    namespace NameOfNameSpace{
        class ClassName{

        };
    } 

    2.Create object of class within main func by the use of namespace and scopeResolution Operator.
    int main(){
        NameOfNameSpace :: ClassName objectName;
        objectName.CallMembersOfClass ;
    }

    properties of NameSpace :-

    1.Nesting is allowed.
    2.We can create Anonymus Namespace.
    3.we can edit or redefine the same Namespace at the same time.
        
*/
#include <iostream>
using namespace std;
namespace hi{
   
    class ai{
        public:
        int a = 20;
        
        void p(){
            cout << "hi";
        }
    };
    
}
class bi{
    public:
    int a = 10;
};

int main(){
    
 
    hi:: ai q; // just created object but having namespace by the use of Scope Resolution Operator .
     
     cout <<q.a;
    return 0;
}

