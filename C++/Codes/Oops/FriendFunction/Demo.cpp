#include <iostream>
using namespace std;

class demo{
    private:
    int a;
    public :
    
    friend void value();
    void input(){
        cout << "Enter the value of a :";
    }
    void display(){
        cout << a;
    }
    void exchange (demo &obj,int &a){
            a = obj.a;
    }
};

class bemo{
    private:
    int b;
    public :
    void input(){
        cout << "Enter the value of b :";
    }

    friend void value1();
    void display(){
        cout << b;
    }
     void exchange (bemo &obj,int &a){
            b = obj.ab;
     }
};
void value (demo &r,int a){
        r.a = a;
}
void value1(bemo &r,int b){

        r.b = b;
}
void change(demo &r,bemo &y){
    int temp1;
    int temp2;
    r.exchange(r,temp1);
    y.exchange(y,temp2);



    
}

int main(){
    demo hi;
    bemo bi;

    hi.input();
    bi.input();
    return 0;
}