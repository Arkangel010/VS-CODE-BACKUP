#include <iostream>
#include <vector>
using namespace std;

int getLeftPerson(int n, int k){

    if(n == 0){
        return 0;
    }
    int asf = getLeftPerson(n -1, k);
    return (asf + k) % n;
    
}
int main(){
    
    cout << getLeftPerson(7, 4);
    return 0;
}