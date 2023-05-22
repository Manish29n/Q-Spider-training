#include<stdlib.h>
#include<limits.h>
#include<stdio.h>
struct queue{
    int front;
    int rear;
    int size;
    int capacity;
    int *arr;
};
struct queue *create(int c){
    struct queue *q=(struct queue *)malloc(sizeof(struct queue));
    q->front=-1;
    q->rear=-1;
    q->size=0;
    q->capacity=c;
    q->arr=(int *)malloc(c*sizeof(int));
    return q;
}
void enqueue(struct queue *q,int ele){
    if(q->size==q->capacity)
        return;
    q->arr[q->rear++];
    q->size++;
}
void dequeue(struct queue *q){
    int ele;
    if(q->size==0)
        return INT_MIN;
    q->front++;
    q->size--;
}
int getfront(struct queue *q){
    if(q->size==0)
        return INT_MIN;
    return q->arr[q->front];
}
int getrear(struct queue *q){
    if(q->size==0)
        return INT_MIN;
    return q->arr[q->rear];
}
int main()
{
    int n;
    scanf("%d",&n);
    struct Queue *q=create(n);
    enqueue(&q,101);
    enqueue(&q,102);
    enqueue(&q,103);
    enqueue(&q,104);
    printf("Front:%d\nRear:%d\n",getfront(&q),getrear(&q));
    return 0;
}
