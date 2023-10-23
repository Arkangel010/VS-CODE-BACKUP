#include <iostream>
using namespace std;
int a = 0;


class node{
    public:
    int data;
    node *next;
};
node *head = NULL;
node *rear = head;

void push(int x){
    node* newNode = new node;
    newNode -> data = x;
    newNode -> next = NULL;
    if(a == 0){
    head = newNode;
    rear = newNode;
    a++;
    }
    else{
    rear  -> next = newNode;
    rear = newNode;
    }

}

int pop(){
    node *temp = head;
    head = head -> next;
    int a = temp ->data;
    delete(temp);
    return a;
}

void print(){
    node *temp = head;
    while(temp != NULL){
    cout << temp -> data << " ";
    temp = temp -> next;
    }
    cout << endl;

}

int frontEle(){
    return head -> data;
}

void isEmpty(){
    if(head == NULL)
    cout << "Empty" << endl;
}

int main(){
     push(3);
     push(4);
     push(5);

     print();
     pop();

     print();
     cout << frontEle();
     return 0;
}
