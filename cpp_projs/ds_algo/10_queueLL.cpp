// implementation of the queue data strcuture using the linked lists
#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node* next;
};

int isfull(node* front)
{
    node* test = new node;
    if(test==NULL)
        return 1;
    else
    {
        return 0;
    }
}

int isempty(node* front, node* rear)
{
    if(front==NULL && rear==NULL)
        return 1;
    else
    {
        return 0;
    }
    
}

void enqueue(node* &front, node* &rear, int data)
{
    if(!isfull(front))
    {
        node* n = new node;
        n->data = data;
        if(front==NULL && rear==NULL)
        {
            front = rear = n;
            n->next = NULL;
        }
        else
        {
            rear->next = n;
            n->next = NULL;
            rear = n;
        }
    }
    else
    {
        cout<<"Sorry, cant enter, as queue is full already!"<<endl;
    }
}

void dequeue(node* &front, node* &rear)
{
    if(!isempty(front, rear))
    {
        node* tmp = front;
        front = front->next;
        delete tmp;
    }
    else
    {
        cout<<"Queue is empty, so dequeuing is not possible!"<<endl;
    }
}

void showthequeue(node* front, node* rear)
{
    node* tmp = front;
    while(tmp!=NULL)
    {
        cout<<tmp->data<<" --> ";
        tmp = tmp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node* front = NULL;
    node* rear = NULL;

    enqueue(front, rear, 11);
    enqueue(front, rear, 21);
    enqueue(front, rear, 31);
    enqueue(front, rear, 41);
    enqueue(front, rear, 51);
    enqueue(front, rear, 61);
    showthequeue(front, rear);
    
    dequeue(front, rear);
    dequeue(front, rear);
    dequeue(front, rear);
    showthequeue(front, rear);
    
    return 0;
}