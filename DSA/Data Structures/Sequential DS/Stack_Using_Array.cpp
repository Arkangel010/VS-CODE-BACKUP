#include <iostream>
using namespace std;

int arr[10];
int top = -1;

void push(int x){
    top++;
    arr[top] = x;
}

void pop(){
    arr[top] = 0;
    top--;
}

void print(){
    for (int i = top; i >= 0; i--){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void Top(){
    cout << "Top element : " << arr[top] << endl;
}

void elementAtPosition(int pos){
    cout << "Element at Position : " << arr[top - pos] << endl;
}

void isEmpty(){
    if(arr[top] == -1)
    cout << "True" << endl;

    else 
    cout << "False";
}

int main(){
    push(4);
    push(2);
    push(1);

    print();
    pop();
    print();
    Top();
    elementAtPosition(1);
    isEmpty();
    return 0;

}