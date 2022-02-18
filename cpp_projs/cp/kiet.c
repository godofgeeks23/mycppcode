// #include <stdio.h>
// #include <stdlib.h>
// #define MAXROW 4
// #define MAXCOL 5
// int main()
// {
    
//     return 0;
// }

// circular queue implementation using linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void enqueue(struct node **front, struct node **rear, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    if(*front == NULL)
    {
        *front = temp;
        *rear = temp;
    }
    else
    {
        (*rear)->next = temp;
        *rear = temp;
    }
}

int dequeue(struct node **front, struct node **rear)
{
    if(*front == NULL)
    {
        printf("Queue is empty\n");
        return -1;
    }
    else
    {
        struct node *temp = *front;
        *front = (*front)->next;
        if(*front == NULL)
            *rear = NULL;
        int data = temp->data;
        free(temp);
        return data;
    }
}

void print(struct node *front)
{
    struct node *temp = front;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    // menu to choose the operation
    int choice;
    struct node *front = NULL, *rear = NULL;
    // display the choices
    printf("1. Enqueue\n2. Dequeue\n3. Print\n4. Exit\n");
    while(1)
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                int data;
                printf("Enter the data: ");
                scanf("%d", &data);
                enqueue(&front, &rear, data);
                break;
            case 2:
                int data = dequeue(&front, &rear);
                if(data != -1)
                    printf("Dequeued data: %d\n", data);
                break;
            case 3:
                print(front);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
}