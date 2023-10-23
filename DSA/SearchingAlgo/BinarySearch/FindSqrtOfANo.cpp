#include <iostream>
using namespace std;

int SearchSqrt(int no)
{
    int s = 0;
    int e = no - 1;
    int ans;
    while (s <= e){
        int mid =  s + (e - s)/2;

        if(mid * mid == no){
            return mid;
        }

        else if(mid * mid > no){
            e = mid - 1;
        }
        else {
            ans = mid;
            s = mid + 1;
        }

    }
    return ans;


}
int main()
{
    int n = 64;

    
    cout << SearchSqrt(n);
    return 0;
}