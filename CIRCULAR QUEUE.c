// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
typedef struct queue
{
    int size;
    int front,rear;
    int *q;
}Q;

void create(Q *q1, int x)
{
    q1->size=x+1;
    q1->front=q1->rear=0;
    q1->q=(int*)malloc(sizeof(int)*x);
}

void enqueue( Q *q1, int x)
{
    if ((q1->rear+1)%q1->size==q1->front)
    printf("Queue is full\n");

    else
    {
        q1->rear= (q1->rear+1)%q1->size;
        q1->q[q1->rear]=x;
    }
}

int dequeue(Q *q1)
{
    int x=-1;
    if(q1->rear==q1->front)
    printf("empty queue");

    else
    {
        q1->front=(q1->front+1) % q1->size;
        x=q1->q[q1->front];
    }
    return x;
}

void display(Q q1)
{
    if(q1.rear==q1.front)
    printf("empty queue");
    else
    {
    int i=q1.front+1;

    do
    {
        printf("%d ",q1.q[i]);
        i=(i+1)%q1.size;
    }while(i!=(q1.rear+1)%q1.size);
    }
    printf("\n");
}

int main() {
    // Write C code here
    Q q;
    create(&q,4);
    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,4);
    display(q);
    dequeue(&q);
    display(q);
    enqueue(&q,5);
    display(q);
    return 0;
}
