// stack as a linked list

#include<bits/stdc++.h>

using namespace std;

struct node                                 // basic structure remains the same
{
    int data;
    node* next;
};

int isempty(node* top)                      // complexity: o(1)
{
    if(top==NULL)
        return 1;
    else
        return 0;
}

int isfull(node* top)                       // complexity: o(1)
{
    node* test = new node;
    if(test==NULL)
        return 1;
    else
        return 0;
}

void push(node* &top, int data)             // complexity: o(1)
{
    if(!isfull(top))
    {
        node* n = new node;
        n->data = data;
        n->next = top;
        top = n;
    }
}

void showthestack(node* top)                // complexity: o(1)
{
    node* tmp = top;
    cout<<"TOP --> ";
    while(tmp->next!=NULL)
    {
        cout<<tmp->data<<" --> ";
        tmp = tmp->next;
    }
    cout<<"NULL"<<endl;
}

void pop(node* &top)                        // complexity: o(1)
{
    if(!isempty(top))
    {
        node* tmp = top;
        top = top->next;
        delete tmp;
    }
    else
    {
        cout<<"Stack empty!"<<endl;
    }
}

int peek(node* top, int index)              // complexity: o(n)
{
    node* ptr = top;
    for(int i=0;i<(index-1);i++)
        ptr = ptr->next;
    if(ptr!=NULL)
        return ptr->data;
    else
    {
        return -1;
    } 
}

int stacktop(node* top)                     // complexity: o(1)
{
    return top->data;
}

int stackbottom(node* top)                  // complexity: o(n)
{
    node* tmp = top;
    while(tmp->next->next!=NULL)
    {
        tmp = tmp->next;
    }
    return tmp->data;
}

int main()
{
    node* top = new node;                   // created a new empty stack
    top->next = NULL;

    push(top, 1);
    push(top, 12);
    push(top, 123);
    push(top, 1234);
    push(top, 12345);
    
    showthestack(top);

    pop(top);
    showthestack(top);

    cout<<isfull(top)<<endl;

    cout<<peek(top, 2)<<endl;

    cout<<stacktop(top)<<endl;
    cout<<stackbottom(top)<<endl;

    return 0;
}
