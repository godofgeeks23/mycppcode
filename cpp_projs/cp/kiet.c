#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int front = -1;
int rear = -1;
int queue[MAX];
void enqueue();
void dequeue();
void display();
int main()
{
	int choice;
	while (1)
	{
		printf("\npress 1:enqueue 2:dequeue 3:display 0:exit\n");
		printf("enter choice:");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 0:
			exit(1);
			break;
		default:
			printf("wrong input\n");
		}
	}
}
void enqueue()
{
	if (rear == MAX - 1)
	{
		printf("Queue is full\n");
	}
	else
	{
		if (front == -1)
		{
			front = 0;
		}
		rear = (rear + 1) % MAX;
		printf("enter the element to enqueue:");
		scanf("%d", &queue[rear]);
	}
}
void dequeue()
{
	if (front == -1)
	{
		printf("queue is empty\n");
	}
	else if (front == rear)
	{
		printf("dequeue element = %d", queue[front]);
		rear = front = -1;
	}
	else
	{
		printf("dequeue element = %d", queue[front]);
		front = (front + 1) % MAX;
	}
}
void display()
{
	int i;
	if (front == -1 || front >= rear)
	{
		printf("queue is empty\n");
	}
	else
	{
		for (i = front; i != rear; i = (i + 1) % MAX)
		{
			printf("%d ", queue[i]);
		}
		printf("%d", queue[i]);
	}
}
