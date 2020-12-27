// linked lists (singly linked)
// ----------------------------
/*
arrays vs linked lists:

1. access is faster in arrays, as address of an element can be calculated in advance due to contuguos memory allocation
whereas, in linked lists, traversal needs to done to distinct memory locations...
2. insertion/deletion is slower in arrays, as shifting has to be done. whereas in linked lists it is much faster
3. in arrays, there may be some unused space wasted
4. in arrays, just the data occupies space, whereas in linked lists, pointer to the next element also are sotred in memory
5. use arrays when order of elements matter 
*/

#include<bits/stdc++.h>

using namespace std;

// here we are discussing about singly linked lists
struct node                             // basic structure of a node in a linked list
{
    int data;
    node* next;
};

void show_the_list(node* head)            // traverse through the list till reaching the NULL pointer
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ---> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void insert_start(node* &head, int element)     // insertion of a node at starting of a linked list
                                                // time complexity: o(1)
                                                // NOTE: here if we used 'node* head', then it would have made a copy of the head var, and changes would be done on that copy
                                                // so to bring about the changes in original var 'head', we made it a reference var of type 'node*'
{
    node* ptr = new node;
    ptr->data = element;

    ptr->next = head;
    head = ptr;
}

void insert_in_middle(node* head, int data, int index)  // time complexity: o(n)
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

void insert_at_last(node* head, int data)       // time complexity: o(n)
{
    node* ptr = new node;
    ptr->data = data;

    node* temp = head;
    while(temp->next!=NULL)
        temp = temp->next;
    temp->next = ptr;
    ptr->next = NULL;
}

void delete_first(node* &head)          // time complexity: o(1)
{
    node* temp = head;
    head = head->next;
    delete temp;
}

void delete_in_between(node* head, int index)       // time complexity: o(n)
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

void delete_last(node* head)
{
    node* p = head;
    node* q = head->next;

    while(q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    delete q;
}

int get_length(node *head)
{
    int size = 0;
    node* p = head;
    while(p!=NULL)
    {
        size++;
        p = p->next;
    }
    return size;
}

int main()
{
    node* head = new node;      // a pointer to store the address of the head of list
    node* second = new node;    // this line also demonstrates the creation of a new node
    node* third = new node;
    node* fourth = new node;
                                
    head->data = 23;            // setting data of node
    second->data = 25;
    third->data = 27;
    fourth->data = 29;

    head->next = second;        // linking the nodes
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    show_the_list(head);

    insert_start(head, 21);
    show_the_list(head);

    insert_in_middle(head, 9090, 2);
    show_the_list(head);

    insert_at_last(head, 31);
    show_the_list(head);

    delete_first(head);
    show_the_list(head);

    delete_in_between(head, 1);
    show_the_list(head);

    delete_last(head);
    show_the_list(head);

    cout<<get_length(head)<<endl;

    
    return 0;
}