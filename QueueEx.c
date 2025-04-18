#include<stdio.h>
#include<stdlib.h>
struct Queue{
   int fornt;
   int rear;
   int capacity;
   int *arr;
};
struct Queue *createQueue(int queueSize){
    struct Queue *queue;

    queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->capacity=queueSize;
    queue->fornt=-1;
    queue->rear=-1;
    queue->arr=(int *)malloc(queue->capacity*sizeof(int));
    return queue;
}
int isFull(struct Queue *q){
     if(q->fornt == q->rear == -1)
        return 1;
     else
        return 0;
}
int isEmpty(struct Queue *q){
    if(q->rear == q->capacity-1)
        return 1;
    else
        return 0;
}
void Enqueue(struct Queue *q,int val){
     if(isFull(q))
        printf("Queue is full...");
     else{
        q->rear=q->rear+1;
        q->arr[q->rear]=val;
        printf("%d enqueued successfully \n");
     }
}
void Dequeue(struct Queue *q){
    int value;
     if(isEmpty(q))
        printf("queue is Empty");
     else{
        q->fornt=q->fornt+1;
       value = q->arr[q->fornt];
       printf("%d dequeue successfully",value);
     }
}
int main(){
   struct Queue *que = createQueue(5);
   Enqueue(que,45);
   Enqueue(que,20);
   Enqueue(que,10);
   Enqueue(que,6);
   Enqueue(que,9);
   Enqueue(que,8);
   Dequeue(que);
}




