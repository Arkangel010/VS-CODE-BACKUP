#include <iostream>
#include <string>
#include "LInkedListImp.cpp"
using namespace std;

class node
{
public:
    char data;
    node *next;
};

node *top = NULL;

void push(char x)
{
    node *newnode = new node;
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}

void push(Llist *x)
{
    x->next = (Llist *)top;
    top = (node *)x;
}

void pop()
{
    node *temp = top->next;
    delete (top);
    top = temp;
}

void print(node *temp)
{
    if (temp == NULL)
    {
        cout << endl;
        return;
    }

    cout << temp->data << " ";
    print(temp->next);
}

void isEmpty()
{
    if (top == NULL)
        cout << "True" << endl;
}

void reverseAnstring(string word)
{
    int i = 0;
    while (word[i] != NULL)
    {
        // push(word[i]);
        i++;
    }
    print(top);
}

void reverseAnLinkedList(Llist *list)
{
    Llist *temp = temp1;
    while (list != NULL)
    {
        temp = list->next;
        push(list);
        list = temp;
    }
    temp1 = (Llist *)top;
    print();
}

void checkForBalancedParenthesis()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            push(s[i]);

        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if ((top->data == '(' && s[i] == ')') || (top->data == '{' && s[i] == '}') || (top->data == '[' && s[i] == ']'))
                pop();
            else
                break;
        }
    }
    if (top == NULL)
        cout << "Paranthesis is balanced!";
    else
        cout << "Paranthesis not balanced";
}

// concept of mathematical parsing( used for representation of operators)
void evaluatePostfix(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
            continue;
        if (s[i] != '+' && s[i] != '-' && s[i] != '/' && s[i] != '*' && s[i] != ' ')
            push(s[i]);
        else if (s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '*')
        {
            int b = int(top->data - '0');
            pop();
            int a = int(top->data - '0');
            pop();
            int c;
            switch (s[i])
            {
            case '+':
                c = a + b;
                break;
            case '-':
                c = a - b;
                break;
            case '*':
                c = a * b;
                break;
            case '/':
                c = a / b;
                break;
            default:
                break;
            }

            push(char(c + '0'));
        }
    }
    cout << "Result is : " << int(top->data - '0') << endl;
}

void evaluatePrefix(string s)
{
    for (int i = s.length(); i >= 0; i--)
    {
        if (s[i] == ' ')
            continue;
        if (s[i] != '+' && s[i] != '-' && s[i] != '/' && s[i] != '*' && s[i] != ' ')
            push(s[i]);
        else if (s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '*')
        {
            int a = int(top->data - '0');
            pop();
            int b = int(top->data - '0');
            pop();
            int c;
            switch (s[i])
            {
            case '+':
                c = a + b;
                break;
            case '-':
                c = a - b;
                break;
            case '*':
                c = a * b;
                break;
            case '/':
                c = a / b;
                break;
            default:
                break;
            }

            push(char(c + '0'));
        }
    }
    cout << "Result is : " << int(top->data - '0') << endl;
}
bool compare(char nxt, char stk)
{
    if (nxt == '*')
        nxt = nxt + 4;

    if (nxt == '+')
        nxt = nxt + 2;

    if (nxt == '-')
        nxt = nxt - 2;

    if (stk == '*')
        stk = stk + 4;

    if (stk == '+')
        stk = stk + 2;

    if (stk == '-')
        stk = stk - 2;
    if (stk > nxt)
        return true;
    else
        return false;
}

void infixToPostfix(string s)
{
    string temp = s;
    temp = s;
    int r = 0;
    for (int i = 0; i <= s.length(); i++)
    {
        if (temp[i] != '+' && temp[i] != '-' && temp[i] != '/' && temp[i] != '*' && temp[i] != ' ' && temp[i] != '(' && temp[i] != '{' && temp[i] != '[' && temp[i] != ')' && temp[i] != '}' && temp[i] != ']')
        {
            s[r] = temp[i];
            r++;
        }
        else if (temp[i] == '+' || temp[i] == '-' || temp[i] == '/' || temp[i] == '*' || temp[i] == '(' || temp[i] == '{' || temp[i] == '[' || temp[i] != '(' || temp[i] != '{' || temp[i] != '[' || temp[i] != ')' || temp[i] != '}' || temp[i] != ']' || temp[i] != '(' || temp[i] != '{' || temp[i] != '[' || temp[i] != ')' || temp[i] != '}' || temp[i] != ']')
        {
            char stk = NULL;
            if (top != NULL){
                stk = top -> data;
            }
            if (temp[i] == ')' || temp[i] == '}' || temp[i] == ']' || compare(temp[i], stk) ||temp[i] == NULL)
            {
                while (top ->data != '(' && top ->data != '{' && top ->data != '[' || temp[i] == NULL && top -> data != NULL)
                {
                    s[r] = top->data;
                    r++;
                    pop();
                }
                if (temp[i] != NULL && temp[i] != ')' && temp[i] != '}' && temp[i] != ']')
                    push(temp[i]);
                    else 
                    pop();
            }
            else
            {
                push(temp[i]);
            }
        }
     
    }
    cout << s << endl;
    
}

int main()
{

    // Insert(3);
    // Insert(4);
    // Insert(5);
    //  reverseAnLinkedList(temp1);
    // checkForBalancedParenthesis();
    // evaluatePostfix("23 *54*+9-");
    // evaluatePrefix("-+*23*549");
    infixToPostfix("((2+3)*5-4)*6");
    return 0;
}
// / - 47
// * - 42 + 4 = 46
// + - 43 + 2 = 45
// - - 45 -2 = 43
