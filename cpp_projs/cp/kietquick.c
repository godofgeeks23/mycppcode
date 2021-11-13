// (boilerplate) code 1
// --------------------
// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// #include<string.h>
// void main()
// {

// }

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

void enqueue()
{
    int val;
    struct node *newNode = malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d", &val);
    newNode->data = val;
    newNode->next = NULL;

    //if it is the first node
    if(front == NULL && rear == NULL)
        //make both front and rear points to the new node
        front = rear = newNode;
    else
    {
        //add newnode in rear->next
        rear->next = newNode;

        //make the new node as the rear node
        rear = newNode;
    }
}

void dequeue()
{
    //used to free the first node after dequeue
    struct node *temp;

    if(front == NULL)
         printf("Queue is Empty. Unable to perform dequeue\n");
    else
    {
        //take backup
        temp = front;

        //make the front node points to the next node
        //logically removing the front element
        front = front->next;

        //if front == NULL, set rear = NULL
        if(front == NULL)
            rear = NULL;

       //free the first node
       free(temp);
    }

}

void printList()
{
    struct node *temp = front;

    while(temp)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    int choice = 1;
    while(choice)
    {
        printf("Enter 0: quit\t1: enqueue\t2: dequeue\t3: display\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: printList(); break;
            default: exit(0);
        }
    }
    return 0;
}
