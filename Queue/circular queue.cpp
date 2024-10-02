#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct Queue
{
    int size;
    int Front;
    int Rear;
    int *Q;
};

void create(struct Queue *q1, int size)
{
    q1->size = size;
    q1->Q = (int *)malloc(sizeof(int)*size);
    q1->Front = 0;
    q1->Rear = 0;
}

void enqueue(struct Queue *q, int x)
{
    if((q->Rear+1)%q->size == q->Front)
        printf("queue is full \n");
    else
    {
        q->Rear = (q->Rear+1)%q->size;
        q->Q[q->Rear] = x;
    }
}

int dequeue(struct Queue *q)
{
    int x = -1;
    if(q->Front == q->Rear)
        printf("queue is empty \n");
    else
    {
        q->Front = (q->Front+1)%q->size;
        x = q->Q[q->Front];
    }
    return x;
}

void display(struct Queue q)
{
    
    printf("diplay \n");
    int i =  (q.Front+1)%q.size;
    if(q.Front == q.Rear)
        printf("queue is empty \n");
    else
    {
        do{
            cout << q.Q[i]<<", ";
            i = (i+1)%q.size;
        }while(i!=(q.Rear+1)%q.size);
        printf("\n");
    }
}


int main()
{
    struct Queue q1;
    create(&q1,12);
    
    enqueue(&q1,12);
    enqueue(&q1,13);
    enqueue(&q1,14);
    enqueue(&q1,15);
    enqueue(&q1,16);
    
    printf("dequeue %d \n",dequeue(&q1));
    printf("dequeue %d \n",dequeue(&q1));
    
    display(q1);
    
    return 0;
}

