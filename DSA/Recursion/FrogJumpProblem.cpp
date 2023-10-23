#include <iostream>
using namespace std;

int jump(int *h,int n ,int i){

    if( i == n - 1) return 0;
    if (i == n - 2) return jump(h,n, i+1) + abs(h[i] - h[i+1]);

    return min(jump(h,n,i+1)+abs(h[i] - h[i+1]),jump(h,n,i+2) + abs (h[i] - h[i+2]));

}
int main(){
    int ar[] = {10,30,40,20};
    int i = 0;
    int n = 4;
    cout << jump(ar,n,i);
    return 0;
}