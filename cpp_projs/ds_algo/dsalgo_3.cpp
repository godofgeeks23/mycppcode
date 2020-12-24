// doubly linked lists

#include<bits/stdc++.h>

using namespace std;

struct node 
{
    int data;
    node* prev;
    node* next;
};

void show_the_list(node* head)
{
    node* temp = head->next;
    do
    {
        cout<<temp->data<<" ---> ";
        temp = temp->next;
    }while(temp!=NULL);
    cout<<"NULL"<<endl;
}

void traverse_back(node* n)                     // to traverse in opposite direction starting from a given node
{
    node* temp = n;
    while(temp->prev!=NULL)
    {
        cout<<temp->data<<" <--- ";
        temp = temp->prev;
    }
    cout<<"NULL"<<endl;
}

void insert_start(node* &head, int element)     // insertion of a node at starting of a linked list
{
    node* ptr = new node;
    ptr->data = element;

    ptr->next = head;
    head = ptr;
}

int main()
{
    node* head = new node;
    head->prev = NULL;             // a single element doubly linked list

    node* first = new node;
    node* second = new node;
    node* third = new node;
    node* fourth = new node;
    node* fifth = new node;
    node* sixth = new node;         // nodes created
    
    first->data = 1001;
    second->data = 1002;
    third->data = 1003;
    fourth->data = 1004;
    fifth->data = 1005;
    sixth->data = 1006;             // nodes data set

    head->next = first; 
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;             // forward linking done
    
    first->prev = head;
    second->prev = first;
    third->prev = second;
    fourth->prev = third;
    fifth->prev = fourth;
    sixth->prev = fifth;            // reverse linking done

    show_the_list(head);

    traverse_back(sixth);


    return 0;
}