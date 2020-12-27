// stack as an array
/*
Stack is a LIFO structure

Application of stack data structure - 
    memory allocation by operating system
    parenthesis matching
    interconversions between infix, postfix, prefix
*/

#include<bits/stdc++.h>

using namespace std;

struct stac                     // 'stack' is a already defined keyword in c++
{
    int size;
    int* arr;
    int top;
};

int isempty(stac s)             // o(1) complexity
{
    if(s.top==-1)
        return 1;
    else
    {
        return 0;
    }
}

int isfull(stac s)              // o(1) complexity
{
    if(s.top==(s.size-1))
        return 1;
    else
    {
        return 0;
    }
}

void push(stac &s, int data)    // o(1) complexity
{
    if(!isfull(s))
    {
        s.top++;
        s.arr[s.top] = data;
    }
    else
    {
        cout<<"Stack full!"<<endl;
    }
}

void pop(stac &s)               // o(1) complexity
{
    if(!isempty(s))
    {
        s.top--;
    }
    else
    {
        cout<<"Stack empty!"<<endl;
    }
}

void showstack(stac s)          // o(1) complexity
{
    cout<<"TOP --> ";
    for(int i=s.top;i>=0;i--)
    {
        cout<<s.arr[i]<<" --> ";
    }
    cout<<"NULL"<<endl;
}

int peek(stac s, int index)     // o(1) complexity
{
    if(index>(s.top+1))
        cout<<"Invalid Position!"<<endl;
    else
    {
        return s.arr[(s.top+1)-index];
    }
    return -1;
}

int stacktop(stac s)
{
    return s.arr[s.top];
}

int stackbottom(stac s)
{
    return s.arr[0];
}

int main()
{
    stac s;
    s.size = 80;
    s.top = -1;
    s.arr = new int[s.size];

    cout<<isempty(s)<<endl;
    cout<<isfull(s)<<endl;
    
    push(s, 1);
    push(s, 12);
    push(s, 123);
    push(s, 1234);
    push(s, 12345);
    push(s, 54321);
    push(s, 5432);
    push(s, 543);
    push(s, 54);
    push(s, 5);
    showstack(s);

    pop(s);
    showstack(s);

    cout<<peek(s, 3)<<endl;

    cout<<stacktop(s)<<endl;
    cout<<stackbottom(s)<<endl;

    return 0;
}