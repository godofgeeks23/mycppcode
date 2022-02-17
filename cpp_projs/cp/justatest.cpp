// circular queue using linked list

#include <iostream>

struct node {
    int data;
    node *next;
};

void enqueue(node **head, node **tail, int data) {
    node *newNode = new node;
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
        *tail = newNode;
    } else {
        (*tail)->next = newNode;
        *tail = newNode;
    }
}

int dequeue(node **head, node **tail) {
    if (*head == NULL) {
        return -1;
    }
    int data = (*head)->data;
    node *temp = *head;
    *head = (*head)->next;
    delete temp;
    if (*head == NULL) {
        *tail = NULL;
    }
    return data;
}

void print(node *head) {
    node *temp = head;
    while (temp != NULL) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main()
{
    
}