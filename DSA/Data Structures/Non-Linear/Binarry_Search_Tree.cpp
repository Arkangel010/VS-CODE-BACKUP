#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *lchild;
    node *rchild;
};

node *getNewNode(int x)
{
    node *newNode = new node;
    newNode->data = x;
    newNode->rchild = NULL;
    newNode->lchild = NULL;
    return newNode;
}

node *insert(node *ptr, int x)
{
    if (ptr == NULL)
    {
        ptr = getNewNode(x);
        return ptr;
    }
    else if (x <= ptr->data)
    {
        ptr->lchild = insert(ptr->lchild, x);
    }
    else
    {
        ptr->rchild = insert(ptr->rchild, x);
    }
    return ptr;
}

bool search(node *ptr, int x)
{
    if (ptr == NULL)
        return false;
    if (ptr->data == x)
    {
        return true;
    }
    else if (x <= ptr->data)
        return search(ptr->lchild, x);
    else
    {
        return search(ptr->rchild, x);
    }
}

node* findMin(node *ptr)
{
    if (ptr == NULL)
        return 0;

    else if (ptr->lchild == NULL)
        return ptr;

    findMin(ptr->lchild);
}

int findMax(node *ptr)
{
    if (ptr == NULL)
        return 0;

    else if (ptr->rchild == NULL)
        return ptr->data;

    findMax(ptr->rchild);
}

int findHeight(node *root)
{
    if (root == NULL)
        return -1;

    int leftHeight = findHeight(root->lchild);
    int rightHeight = findHeight(root->rchild);

    return max(leftHeight, rightHeight) + 1;
}

void printData(node *root)
{
    cout << root->data << " ";
}

void traversal(node *root)
{
    if (root == NULL)
        return;

    printData(root);
    traversal(root->lchild);
    traversal(root->rchild);
}

void levelOrderTraversal(node *root)
{
    if (root == NULL)
        return;
    queue<node *> Q;
    Q.push(root);
    while (!Q.empty())
    {
        node *current = Q.front();
        cout << current->data << " ";

        if (current->lchild != NULL)
            Q.push(current->lchild);

        if (current->rchild != NULL)
            Q.push(current->rchild);

        Q.pop();
    }
}

void preOrderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    printData(root);
    preOrderTraversal(root->lchild);
    preOrderTraversal(root->rchild);
}
void inOrderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    
    inOrderTraversal(root->lchild);  
         printData(root);
    inOrderTraversal(root->rchild);   

}

void postOrderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    
    postOrderTraversal(root->lchild);  
    postOrderTraversal(root->rchild);   
     printData(root);
}
bool isSubtreeLesser(node *root, int val){
    if(root == NULL)
    return true;

    if(root -> data >= val && isSubtreeLesser(root ->lchild, val) && isSubtreeLesser(root -> rchild, val))
        return true;

    else return false;
}
bool isSubtreeGreater(node *root, int val){
    if(root == NULL)
    return true;

    if(root -> data > val && isSubtreeGreater(root ->lchild, val) && isSubtreeGreater(root -> rchild, val))
        return true;

    else return false;
}
// bool isBSTUtil(node * root, int minValue, int maxValue){
//     if(root == NULL) return true;

//     if(root -> data < minValue && root -> data > maxValue && isBinarySearchTree(root -> lchild, minValue, root -> data) && isBinarySearchTree(root -> rchild, root -> data, maxValue))
//     return true;

//     else 
//     return false;
    
// }

// bool isBinaryTree(node* root){
//     return isBSTUtil(root, I)
// }

node* remove(node* root, int x){
        if(root == NULL) 
        return root;

        else if(x < root -> data) 
        root -> lchild = remove(root -> lchild, x);
        
        else if(x > root -> data)
        root -> rchild = remove(root -> rchild, x);

        else{
        if(root -> lchild == NULL && root -> rchild == NULL){
            delete(root);
            root = NULL;
        }
        else if(root -> lchild == NULL){
            node* temp = root;
            root = root -> rchild;
            delete(temp);
        }
        else if(root -> rchild == NULL){
            node* temp = root;
            root = root -> lchild;
            delete(temp);
        }
        else{
            node* temp = findMin(root -> rchild);
            root -> data = temp -> data;
            root -> rchild = remove(root -> rchild, temp -> data);
        }
        
 }   
  return root;   
}   
int main()
{
    node *root = NULL;
    root = insert(root, 15);
    root = insert(root, 16);
    root = insert(root, 7);
    root = insert(root, 1);

    // bool a = search(root, 7);
    // cout << a << endl;
    // int min = findMin(root);
    // cout << min << endl;

    // int max = findMax(root);
    // cout << max << endl;

    // int height = findHeight(root);
    // cout << height;

    //preOrderTraversal(root);
    // levelOrderTraversal(root);
    //inOrderTraversal(root);
    root = remove(root ,1);

    traversal(root);
   
    return 0;
}