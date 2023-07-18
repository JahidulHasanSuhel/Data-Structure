/*
Queue implementation with Array
Code written by Suhel.
*/
#include <bits/stdc++.h>
using namespace std;
 
struct Queue {
    int front;
    int rear;
    int size;
    int* arr;
    Queue(int d)
    {
        front = rear = 0;
        // size = d;
        arr = new int[size];
    }

    void enqueue(int data)
    {
        if (size == rear) {
            printf("\nQueue is full\n");
            return;
        }
        else {
            arr[rear] = data;
            rear++;
        }
        return;
    }
 
    void dequeue()
    {
        if (front == rear) {
            printf("\nQueue is  empty\n");
            return;
        }
        else {
            for (int i = 0; i < rear - 1; i++) {
                arr[i] = arr[i + 1];
            }
            rear--;
        }
        return;
    }

    void queueDisplay()
    {
        int i;
        if (front == rear) {
            printf("\nQueue is Empty\n");
            return;
        }
 
        for (i = front; i < rear; i++) {
            printf(" %d <-- ", arr[i]);
        }
        return;
    }
 
    void qfront()
    {
        if (front == rear) {
            printf("\nQueue is Empty\n");
            return;
        }
        printf("\nFront Element is: %d", arr[front]);
        return;
    }
};
 
int main(void)
{
    Queue q(4);
 
    q.queueDisplay();
 
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
 
    q.queueDisplay();
 
    q.enqueue(60);
 
    q.queueDisplay();
 
    q.dequeue();
    q.dequeue();
 
    printf("\n\nafter two node deletion\n\n");
 
    q.queueDisplay();

    q.qfront();
 
    return 0;
}
