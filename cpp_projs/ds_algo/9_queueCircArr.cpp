// circular queue implementation using arrays
/*
by this, we will be able to use the array fully

concept of circular increment/decrement - 
    int i = (i+1)%size;                 // for increment
*/

#include <bits/stdc++.h>

using namespace std;

struct my_queue
{
    int *arr;
    int size;
    int front;
    int rear;
    int nos;
};

int isfull(my_queue q)
{
    if (q.nos == q.size)
        return 1;
    else
        return 0;
}

int isempty(my_queue q)
{
    if (q.nos == 0)
        return 1;
    else
        return 0;
}

void enqueue(my_queue &q, int data)
{
    if (isfull(q))
        cout << "Cannot enqueue, queue is full!" << endl;
    else
    {
        if (q.nos == 0)
        {
            q.front = q.rear = 0;
            q.arr[q.rear] = data;
            q.nos++;
        }
        else
        {
            q.rear = (q.rear + 1) % q.size;
            q.arr[q.rear] = data;
            q.nos++;
        }
    }
}

void dequeue(my_queue &q)
{
    if (isempty(q))
    {
        cout << "Queue is empty, so cant dequeue..." << endl;
    }
    else
    {
        if (q.nos == 1)
        {
            q.nos--;
            q.rear = q.front = -1;
        }
        else
        {
            q.nos--;
            q.front = (q.front + 1) % q.size;
        }
    }
}

void showthequeue(my_queue q)
{
    int i = q.nos;
    int index = q.front;
    cout << "front --> ";
    while (i--)
    {
        cout << q.arr[index] << " --> ";
        index = (index + 1) % q.size;
    }
    cout << "rear" << endl;
}

int main()
{
    my_queue q;
    q.size = 10;
    q.arr = new int[q.size];
    q.front = q.rear = -1;
    q.nos = 0;

    showthequeue(q);

    enqueue(q, 11);
    showthequeue(q);

    cout << isempty(q) << endl;

    dequeue(q);
    showthequeue(q);

    cout << isempty(q) << endl;

    enqueue(q, 22);
    enqueue(q, 33);
    enqueue(q, 44);
    enqueue(q, 55);
    enqueue(q, 66);
    enqueue(q, 77);
    enqueue(q, 88);
    enqueue(q, 99);
    enqueue(q, 111);
    enqueue(q, 222);
    enqueue(q, 333);
    showthequeue(q);

    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    showthequeue(q);

    enqueue(q, 1000);
    enqueue(q, 2000);
    enqueue(q, 3000);
    enqueue(q, 4000);
    enqueue(q, 5000);
    enqueue(q, 6000);
    enqueue(q, 7000);
    enqueue(q, 8000);
    showthequeue(q);

    return 0;
}