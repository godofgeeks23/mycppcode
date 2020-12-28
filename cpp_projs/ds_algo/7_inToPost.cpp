// INFIX to POSTFIX: this is another application of the stack data structure
/*
Algorithm in simple words - 
    expression is taken into a string
    travere char by char, 
        if found a operand, add to the result expression
        if found a operator,
            if it has higher or equal precedence than the current stack top, push it into the stack
            if it has lower precedence, then keep popping(and adding it to result) till the situation becomes favourable
        at the end, keep popping and adding to the result till stack becomes empty

NOTE: Precedence order - 
                *, /  --> +, -
*/

#include <bits/stdc++.h>

using namespace std;

struct node
{
    char data;
    node *next;
};

int isempty(node *top)
{
    if (top == NULL)
        return 1;
    else
        return 0;
}

int isfull(node *top)
{
    node *test = new node;
    if (test == NULL)
        return 1;
    else
        return 0;
}

void push(node *&top, char data)
{
    if (!isfull(top))
    {
        node *n = new node;
        n->data = data;
        n->next = top;
        top = n;
    }
}

void showthestack(node *top)
{
    node *tmp = top;
    cout << "TOP --> ";
    while (tmp != NULL)
    {
        cout << tmp->data << " --> ";
        tmp = tmp->next;
    }
    cout << "NULL" << endl;
}

char pop(node *&top)
{
    node *tmp = top;
    char n = tmp->data;
    top = top->next;
    delete tmp;
    return n;
}

char stacktop(node *top)
{
    return top->data;
}

char stackbottom(node *top)
{
    node *tmp = top;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    return tmp->data;
}

int precedence_of(char c)
{
    if (c == '*' || c == '/')
        return 1;
    else if (c == '+' || c == '-')
        return 0;
    else
        return -1;
}

int isoperator(char c)
{
    if (c == '*' || c == '/' || c == '+' || c == '-')
        return 1;
    else
        return 0;
}

int main()
{
    node *top = new node;
    top = NULL;

    string infix, postfix;
    getline(cin, infix);

    for (int i = 0; i < infix.size(); i++)
    {
        if (!isoperator(infix[i])) // is operand
            postfix.push_back(infix[i]);
        else // operator
        {
            if (isempty(top))
                push(top, infix[i]);
            else // stack has some operators...
            {
                if (precedence_of(infix[i]) > precedence_of(stacktop(top)))
                    push(top, infix[i]);
                else // popping needs to be done
                {
                    while (precedence_of(infix[i]) <= precedence_of(stacktop(top)))
                    {
                        if (!isempty(top))
                            postfix.push_back(pop(top));
                        if(isempty(top))
                            break;
                    }
                    push(top, infix[i]);
                }
            }
        }
    }
    while (!isempty(top))
        postfix.push_back(pop(top));
    cout << "The result expression is: " << postfix << endl;
    return 0;
}