// this is a application of the stack data structure, in which we have to find whether a given expression 
// has valid set of brackets or not
/*
Algorithm in simple words - 
    enter the expression into a string
    traverse char by char in the string...
        if found a opening bracket, push it into the stack
        if found a closing bracket, pop if the top bracket in stack is of the same type
    conditions for valid expression - 
        stack must not underflow during the operation, and
        at the end of operation, stack must be empty
*/

#include<bits/stdc++.h>

using namespace std;

struct node
{
    char data;
    node* next;
};

int isempty(node* top)
{
    if(top==NULL)
        return 1;
    else
        return 0;
}

int isfull(node* top)
{
    node* test = new node;
    if(test==NULL)
        return 1;
    else
        return 0;
}

void push(node* &top, char data)
{
    if(!isfull(top))
    {
        node* n = new node;
        n->data = data;
        n->next = top;
        top = n;
    }
}

void showthestack(node* top)
{
    node* tmp = top;
    cout<<"TOP --> ";
    while(tmp!=NULL)
    {
        cout<<tmp->data<<" --> ";
        tmp = tmp->next;
    }
    cout<<"NULL"<<endl;
}

void pop(node* &top)
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

char stacktop(node* top)
{
    return top->data;
}

char stackbottom(node* top)
{
    node* tmp = top;
    while(tmp->next!=NULL)
    {
        tmp = tmp->next;
    }
    return tmp->data;
}

int is_opening_bracket(char c)
{
    if(c=='(' || c=='{' || c=='[' || c=='<')
        return 1;
    else
        return 0;
}

int is_closing_bracket(char c)
{
    if(c==')' || c=='}' || c==']' || c=='>')
        return 1;
    else
        return 0;
}

int matching_brackets(char a, char b)
{
    if(a=='(' && b==')')
        return 1;
    else if(a=='{' && b=='}')
        return 1;
    else if(a=='[' && b==']')
        return 1;
    else if(a=='<' && b=='>')
        return 1;
    else
        return 0;
}
int main()
{
    string exprsn;
    getline(cin, exprsn);
    node* top = new node;
    top = NULL;
    for(int i=0;i<exprsn.length();i++)
    {
        if((is_opening_bracket(exprsn[i])))
            push(top, exprsn[i]);
        else if(is_closing_bracket(exprsn[i]))
        {
            if((!isempty(top)) && (matching_brackets(stacktop(top), exprsn[i])))
                pop(top);
            else
            {
                cout<<"Mismatching brackets..."<<endl;
                exit(0);
            }
        }
    }    
    if(isempty(top))
        cout<<"Yes! Perfect Expression..."<<endl;
    else
    {
        cout<<"Mismatching brackets..."<<endl;
    }
    return 0;
}