#include <iostream>
using namespace std;
int a = 0;


class Llist{
    public:
    int value;
    Llist *next;

    
    
};
Llist *head;
Llist *temp1;
void Insert(int x){
        Llist *temp = new Llist;
        temp -> value = x;
        temp -> next = NULL;
        
        if (a == 0){
        temp1 = temp;
        a++;
        head = temp;
        }
        else
        head -> next = temp;
        head = temp;
    }
    void print(){
        Llist *temp = temp1;
        while(temp != NULL){
            cout << temp -> value << " " ;
            temp = temp -> next;
        }
        cout << endl;
    }

    void hInsert(int x){
        Llist *node = new Llist;
        node -> value = x;
        node -> next = temp1;
        temp1 = node;
    }

    void Insertp (int pos , int x){
        Llist *node = new Llist;
        Llist *temp = temp1;
        Llist *ltemp = temp;
        node -> value = x;
        node -> next = NULL;

        for(int i = 0; i <= pos; i++){
            temp = ltemp;
            ltemp = temp -> next;
            if( i == (pos -1)){
                
            temp -> next = node;
            }
            if(i == pos){
                 node -> next = temp;
                 if( pos == 0)
                 temp1 = node;
            }
           
        }
    }
    void remove(int x){
        Llist *temp = temp1;
        Llist *ltemp = NULL;
        for(int i = 0; i <= x ; i++){
            ltemp = temp -> next;
            if( i == x-1){
            ltemp = ltemp ->next;
            delete(temp->next);
            temp -> next = ltemp;
            }
            else 
            if(x == 0){
                delete(temp);
                temp1 = ltemp;
            }
            temp = ltemp;
        }
    }

    void reverse(){
       Llist *currentNode = temp1;
       Llist *currentposition = temp1;
       Llist *previousNodePostion = NULL;
       int n = 0;
       while(currentNode != NULL){ 
        currentposition = currentNode;  
         currentNode = currentNode ->next;
        if(n ==0){
        currentposition -> next = NULL;
        
        n++;
        }
        else {
        currentposition -> next = previousNodePostion;
        
        }
        
        previousNodePostion = currentposition; 
       }
       temp1 = currentposition;
      
    }
    void Print(Llist *ptr){
        if(ptr == NULL)
        return;

        cout << ptr -> value << " ";
        Print(ptr ->next);
    }
    void RPrint(Llist *ptr){
        if(ptr == NULL)
        return;
        RPrint(ptr ->next);
         cout << ptr -> value << " ";
    }
    void Rreverse(Llist *ptr){
        if(ptr -> next == NULL){
        temp1 = ptr;
        return;
        }
        Rreverse(ptr -> next);
        Llist *ptr2 = ptr -> next;
        ptr2 -> next = ptr;
       ptr -> next = NULL;
        
    }
/* int main()
{
    Insert(1);
    Insert(3);
    Insert(4);
    // print();

    // Insertp(1,2);
    
    // print();

    // remove(0);
    // print();
    // reverse();
    // print();

   // RPrint(temp1);
    Rreverse(temp1);
    print();
   return 0;
    
} */