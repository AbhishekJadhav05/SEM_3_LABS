#include<stdio.h>
#define max 10
typedef struct 
{
    int length;
    int f;
    int r;
    int arr[10];
}queue;

typedef struct 
{
    int top;
    int arr[max];
}stack;

void enQ(queue *q,int val){
    if(q->length == max){
        return;
    }
    q->r = (q->r+1)%max;
    q->arr[q->r] = val;
    q->length++;
}
int deQ(queue *q){
    if(q->length == 0){
        return;
    }
    q->f = (q->f+1)%max;
    q->length--;
}
void dispQ(queue* q){
    for(int i=0;i<q->length;i++){
        printf("%d",q->arr[(q->f+i+1)%max]);
    }
}
void push(stack *s){

}
int pop(stack *s){

}
void dispStack(stack *s){

}
void main(){

}

