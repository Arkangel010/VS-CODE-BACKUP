#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next = NULL;
    node *prev = NULL;
};

node *head;
node *temp = head;
int n = 0;
void insertAtEnd(int x)
{
    node *newnode = new node;
    newnode->data = x;
    if (n == 0)
    {
        newnode -> prev = NULL;
        newnode -> next = NULL;
        head = newnode;
        n++;
    }
    else
    {
        temp -> next = newnode;
        newnode -> prev = temp;
        newnode -> next = NULL;
    }
    temp = newnode;
}

void insertAtBeggining(int x){
    node *newnode = new node;
    newnode -> data = x;
    head -> prev = newnode;
    newnode -> next = head;
    head = newnode;
}

void insertAtRandomPos(int pos , int x){
    node *newnode = new node;
    newnode -> data = x;
    node *temp = head;

    for(int i = 0; i < pos ; i++){
        temp = temp -> next;
    }
    newnode -> prev = temp -> prev;
    newnode -> next = temp;
    temp -> prev -> next = newnode;
    temp ->prev = newnode;

} 

void remove(int pos){
    node *temp = head;
    for(int i = 0; i < pos; i++){
        temp = temp -> next;
    }
    temp -> prev -> next = temp -> next;
    temp -> next -> prev = temp -> prev;
}

void print()
{
    node *temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void Recursionprint(node *temp){
    if(temp == NULL)
    return;

    cout << temp -> data << " ";
    Recursionprint(temp -> next);
}

void ReverseRecursionprint(node *temp){
    if(temp == NULL)
    return;
    ReverseRecursionprint(temp -> next);
     cout << temp -> data << " ";
}


int main()
{
    insertAtEnd(5);
    insertAtEnd(6);
    insertAtEnd(7);
    insertAtBeggining(4);
    print();
    insertAtRandomPos(1, 3);
    print();
    remove(1);
    ReverseRecursionprint(head);
    return 0;
}