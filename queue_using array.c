#include <stdio.h>
#include<stdlib.h>

typedef struct queue
{
    int size,front,rear,*q1;
}Q;

void create(Q *q, int s)
{
    q->size=s;
    q->front=-1;
    q->rear=-1;
    q->q1=(int*)malloc(sizeof(int)*s);
}

void enqueue(Q *q, int x)
{
    if(q->rear==q->size-1)
    printf("full\n");

    else
    {
        q->rear++;
        q->q1[q->rear]=x;
    }
}

int dequeue(Q *q)
{
    int x=-1;
    if(q->rear==q->front)
    printf("empty\n");

    else
    {
        q->front++;
        x=q->q1[q->front];
    }
    return x;
}

void display(Q q)
{
    if (q.rear==q.front)
    printf("empty\n");

    else
    {
        for (int i=q.front+1;i<=q.rear;i++)
            printf("%d ",q.q1[i]);
        printf("\n");
    }
}

int main() {
    // Write C code here
    Q q;
    create(&q,3);
    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);

    display(q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);

    display(q);
    return 0;
}
