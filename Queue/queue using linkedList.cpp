#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
}*Front=NULL, *Rear=NULL;

void enqueue(int x)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    if(temp==NULL)
        printf("queue is full \n");
    else
    {
        temp->data = x;
        temp->next = NULL;
        if(Front==NULL)
            Front = Rear = temp;
        else
        {   
            Rear->next = temp;
            Rear = temp;
        }
    }
}

int dequeue()
{
    int x = -1;
    struct Node *temp;
    if(Front == NULL)
        printf("queue is empty \n");
    else
    {
        temp = Front;
        Front = Front->next;
        x = temp->data;
        free(temp);
    }
    return x;
}

void display()
{
    struct Node *temp;
    if(Front == NULL)
        printf("queue is empty \n");
    else
    {
        temp = Front;
        while(temp!=NULL)
        {
            cout <<temp->data <<", ";
            temp = temp->next;
        }
        printf("\n");
    }
}


int main()
{
    enqueue(12);
    enqueue(13);
    enqueue(14);
    enqueue(15);
    enqueue(16);
    
    printf("dequeue %d \n",dequeue());
    printf("dequeue %d \n",dequeue());
    
    display();
    
    return 0;
}

