#include <iostream>
using namespace std;
class a {
    public :
    void display(){
        cout << "hello";
    }
};

class b : public a{
    public:
    
};
int main(){
    b obj;
    obj.display();
    return 0;
}