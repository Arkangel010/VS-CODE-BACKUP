#include <iostream>
using namespace std;

class demo{
    friend class bemo;
    private:
    int h = 1;
    public :
    int a;
    void display(){
        cout << h;
    }
};

class bemo{
    private:
    int g;
    public :
 
    void display(){
        demo d1;
        cout << d1.h;
    }
};

int main(){
    bemo hi;
    hi.display();
    return 0;
}