#include <iostream>
using namespace std;
void waysToNStairs(int n){
    if(n < 0)
    return;
    if(n == 0){
       
        
        return;
   
    }
    if(n == 1){
        cout << 1;
        
   
    }
    waysToNStairs(n -1);

    if(n == 2){
       cout << 2;
       return;
       
    }
   
    
   
    
     
  
}
int main(){
    waysToNStairs(2);
}