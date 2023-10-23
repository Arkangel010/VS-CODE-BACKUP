/* Tower of Hanoi is a mathematical puzzle where we have three rods (A, B, and C) and N disks. Initially, all the disks are stacked in decreasing value of diameter i.e., the smallest disk is placed on the top and they are on rod A. The objective of the puzzle is to move the entire stack to another rod (here considered C),by the help of one rod(Rod b) obeying the following simple rules: 

Only one disk can be moved at a time.
Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
No disk may be placed on top of a smaller disk. */

// Note : Rember the use of PMI and Take help of one of the rods to transfer the elements to other rod.


#include <iostream>
using namespace std;
void ins(int a , int b){
    cout << "Put 1 bid from " << a << " to " << b << endl;
}
void Hp(int n, int f, int h, int d){
    if (n < 1){
    return;
    }
    if(n == 1){
        ins(f, d);
    }
    else {
    Hp(n - 1 ,f, d, h);
    Hp(n-(n -1) , f, h, d);
    Hp(n - 1, h, f, d);
    
    }
    
}
int main(){
    Hp(4, 1, 2, 3);
    return 0;
}