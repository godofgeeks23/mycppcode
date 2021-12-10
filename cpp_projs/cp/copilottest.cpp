// circular queue using array
#include <iostream>
using namespace std;
#define MAX 10
int queue[MAX];
int front = -1;
int rear = -1;
void enqueue(int);
int dequeue();
void display();
void enqueue(int item)
{
    if (rear == MAX - 1)
    {
        cout << "Queue is full" << endl;
        return;
    }
    if (front == -1)
        front = 0;
    rear = rear + 1;
    queue[rear] = item;
}
int dequeue()
{
    int item;
    if (front == -1)
    {
        cout << "Queue is empty" << endl;
        return -1;
    }
    item = queue[front];
    front = front + 1;
    if (front > rear)
    {
        front = -1;
        rear = -1;
    }
    return item;
}
void display()
{
    int i;
    if (front == -1)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue is : ";
    for (i = front; i <= rear; i++)
        cout << queue[i] << " ";
    cout << endl;
}
int main()
{
    int choice, item;
    while (1)
    {
        cout << "1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the element to be inserted : ";
            cin >> item;
            enqueue(item);
            break;
        case 2:
            item = dequeue();
            if (item != -1)
                cout << "Deleted item is : " << item << endl;
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            cout << "Wrong choice" << endl;
        }
    }
    return 0;
}