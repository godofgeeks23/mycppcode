// circular linked lists

#include<bits/stdc++.h>

using namespace std;

struct node 
{
    int data;
    node* next;
};

void show_the_list(node* head)            // traverse through the list till reaching the head pointer again
{
    node* temp = head;
    do
    {
        cout<<temp->data<<" ---> ";
        temp = temp->next;
    }while(temp!=head);
    cout<<"loop..."<<endl;
}

void insert_start(node* &head, int element)         // just a little different
{
    node* ptr = new node;
    ptr->data = element;

    node* p = head->next;
    while(p->next!=head)
        p = p->next;
    p->next = ptr;
    ptr->next = head;
    head = ptr;
}

void insert_in_middle(node* head, int data, int index)      // exactly same as singly linked list
{
    node* ptr = new node;
    ptr->data = data;

    node* temp = head;

    int i = 0;
    while(i!=(index-1))
    {
        temp = temp->next;
        i++;
    }
    ptr->next = temp->next;
    temp->next = ptr;
}

int get_length(node *head)
{
    int size = 0;
    node* temp = head;
    do
    {
        temp = temp->next;
        size++;
    }while(temp!=head);
    return size;
}

void delete_in_between(node* head, int index)       // exactly same
{
    node* p = head;
    node* q = head->next;

    for(int i=0;i<(index-1);i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    delete q;
}

void insert_at_last(node* head, int data)       // very little changes
{
    node* ptr = new node;
    ptr->data = data;

    node* temp = head;
    while(temp->next!=head)
        temp = temp->next;
    temp->next = ptr;
    ptr->next = head;
}

void delete_first(node* &head)          // pay attention to this - learn to manage the links
{
    node* temp = head;
    while(temp->next!=head)
        temp = temp->next;
    temp->next = head->next;
    delete head;                       // this does not delete the head pointer, just frees the memory occupied by it
    head = temp->next;
}

void delete_last(node* head)         // very little changes
{
    node* p = head;
    node* q = head->next;

    while(q->next!=head)
    {
        p = p->next;
        q = q->next;
    }
    p->next = head;
    delete q;
}

int main()
{
    //creation of the nodes
    node* head = new node;
    node* second = new node;
    node* third = new node;
    node* fourth = new node;
    node* fifth = new node;

    // setting data in the nodes
    head->data = 101;
    second->data = 102;
    third->data = 103;
    fourth->data = 104;
    fifth->data = 105;
    
    // linking the nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = head;             // changes occur here...
    
    show_the_list(head);
    
    insert_start(head, 100);
    show_the_list(head);

    insert_in_middle(head, 999, 2);
    show_the_list(head);

    cout<<get_length(head)<<endl;

    delete_in_between(head, 2);
    show_the_list(head);

    delete_first(head);
    show_the_list(head);

    insert_at_last(head, 2307);
    show_the_list(head);

    delete_last(head);
    show_the_list(head);

    return 0;
}