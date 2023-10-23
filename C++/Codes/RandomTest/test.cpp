// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class hi {
    public :
    hi(){
        // cout << "done";
    }
    hi(hi &s1){
        cout << "ok";
    }
};

int main() {
    // Write C++ code here
    hi obj;
    hi obj2 (obj);

    return 0;
}