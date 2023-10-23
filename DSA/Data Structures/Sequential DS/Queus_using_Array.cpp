//Circular Array - Current position i
// Next position - (i + 1)% N
// Previous Position - (i+ N -1)% N
#include <iostream>
using namespace std;
int arr[10];
int front = -1;
int rear = -1;
int a = 0;
void push(int x){
    if((rear + 1)%9 == front){
        cout << "Array is full!";
          return;
    } 
    if(a == 0){
    front++;
    rear++;
    arr[front] = x;
    a++;
    }
    else{
    rear = (rear + 1)% 10;
    arr[rear] = x;
    }
}
int pop(){
    int a;
    if(front == -1)
    return 0;
    else if(front == rear){
    a = arr[front];
    front--;
    rear--;
    return a;
    }
    else{
    a = arr[front];
    front = (front + 1)% 10;
    return a;
    }
}
void print(){
    for(int i = front; i <= rear; i++)
    cout << arr[i] << " ";
    cout << endl;
}
int frontEle(){
    return arr[front];
}
int main(){
    push(1);
    push(2);
    push(3);

    print();
    pop();
    print();
    cout << frontEle();
    return 0;
}