#include <iostream>
using namespace std;

class abs{
    public:
    int a  = 10;
};

class c1 : public abs{
    public:
    int sum(int a, int b){
        return this -> a + b;
    }
};

int main(){
    c1 obj;
    cout << obj.sum(5, 6);
    return 0;
}