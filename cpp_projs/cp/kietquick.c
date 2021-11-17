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
#include<math.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
void push(int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = top;
    top = temp;
}
int pop()
{
    if(top == NULL)
    {
        printf("Stack is empty\n");
        return -1;
    }
    struct node *temp = top;
    top = top->next;
    int x = temp->data;
    free(temp);
    return x;
}
void display()
{
    struct node *temp = top;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    int choice = 1, element;
    while(choice)
    {
        printf("Enter 0: quit\t1: push\t2: pop\t3: display\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                scanf("%d", &element);
                push(element); break;
            case 2: printf("Popped %d\n", pop()); break;
            case 3: display(); break;
            default: exit(0);
        }
    }
    return 0;
}
