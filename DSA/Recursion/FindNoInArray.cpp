#include <iostream>
using namespace std;

bool find (int ar[],int a,int l,int i){
    if( i == l) return false;
    
     
    return  (ar[i] == a) || find(ar,a,l,i+1);
     

}

int main(){
    int ar[] = {1,2,3,4,5};
    bool h = find(ar,11,5,0);
    if(h) 
    cout<<"ok";
    else 
    cout<< "not";
    return 0;
}