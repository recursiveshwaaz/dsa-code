#include<stdio.h>
#include<stdlib.h>
struct Stack{
    int capacity;
    int top;
    int *arr;
};
struct Stack *createStack(int stackSize){
        struct Stack *stack;
        stack =(struct Stack*)malloc(sizeof(struct Stack));
        stack->top=-1;
        stack->capacity=stackSize;
        stack->arr=(int*)malloc(stack->capacity*sizeof(int));
        return stack;
}
int isFull(struct Stack *stack){
    return stack->top == stack->capacity-1;
}
int isEmpty(struct Stack *stack){
   return stack->top == -1;
}
void push(struct Stack *stack,int item){
      if(isFull(stack))
        return;
      stack->arr[++stack->top]=item;
}
int pop(struct Stack *stack){
    if(isEmpty(stack))
    return -1;

    stack->top--;
   return stack->arr[stack->top];
}

int main(){
    struct Stack *stack;
    push(stack,5);
    push(stack,5);
    push(stack,5);
    push(stack,5);
    push(stack,5);
}
