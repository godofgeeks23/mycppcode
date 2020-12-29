// queue data structure using arrays
/*
queue is a FIFO data strcuture
very similar to actual daily life queues...

common terms used related to the queues - 
    1. enqueue() - process to enter the data into the queue... and this happens at the rear end of the queue
    2. dequeue() - process of removing data from the queue... which happens from the front end of the queue

in our implementation, assume that a queue is a line of people, standing to get something from a counter, which is infront of the 'front' pointer

Here in this form of implemenation you will see that most operatios are being done in o(1) time.
but this method has the following limitations too...
    1. as the list is not circular, so if the front and the rear pointer reaches the end of the array, then even if the queue has some space, it wont' enter the element 
    2. due to this, a lot of space gets wasted.
*/
#include<bits/stdc++.h>

using namespace std;

struct my_queue                             // in c++, queue is already defined in the stl library, so we had to name it something else
{
    int* arr;
    int size;
    int front;
    int rear;
    int nos;                                // to keep a track of the number of elements in the queue
};

int isempty(my_queue q)                     // time complexity: o(1)
{
    if(q.nos==0)
        return 1;
    else
        return 0;
}

int isfull(my_queue q)                      // time complexity: o(1)
{
    if(q.nos==q.size)
        return 1;
    else
        return 0;
}

void enqueue(my_queue &q, int data)         // time complexity: o(1)
{
    if(!isfull(q))
    {
        if(isempty(q))
        {
            q.front++;
            q.rear++;
            q.arr[q.rear] = data;
            q.nos++;
        }
        else
        {
            q.rear++;
            q.arr[q.rear] = data;
            q.nos++;
        }
        
    }
    else
    {
        cout<<"Queue is FULL!"<<endl;
    }
}

void dequeue(my_queue &q)                   // time complexity: o(1)
{
    if(!isempty(q))
    {
        q.nos--;
        q.front++;
    }
    else
    {
        cout<<"Queue EMPTY!"<<endl;
    }
    
}

void showthequeue(my_queue q)
{
    cout<<"front --> ";
    for(int i=q.front;i<=q.rear;i++)
        cout<<q.arr[i]<<" --> ";
    cout<<"rear"<<endl;
}

int main()
{
    my_queue mq;
    mq.size = 10;
    mq.arr = new int[mq.size];
    mq.front = mq.rear = -1;
    mq.nos = 0;                                 // queue initialized

    enqueue(mq, 25);
    enqueue(mq, 30);
    enqueue(mq, 35);
    enqueue(mq, 40);
    enqueue(mq, 45);
    enqueue(mq, 50);
    enqueue(mq, 55);
    enqueue(mq, 60);
    enqueue(mq, 65);
    enqueue(mq, 70);
    enqueue(mq, 75);
    enqueue(mq, 80);
    showthequeue(mq);

    dequeue(mq);
    dequeue(mq);
    showthequeue(mq);
    dequeue(mq);
    dequeue(mq);
    dequeue(mq);
    dequeue(mq);
    dequeue(mq);
    dequeue(mq);
    dequeue(mq);
    dequeue(mq);
    showthequeue(mq);

    cout<<isempty(mq)<<endl;

    enqueue(mq, 99);                            // now it wont work because of the limitation stated above
    showthequeue(mq);

    return 0;
}