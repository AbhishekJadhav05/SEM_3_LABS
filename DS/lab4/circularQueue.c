#include<stdio.h>
#define MAX 5

struct circularQueue
{
    int arr[MAX];
    int f;
    int r;

}circularQueue;

int length = 0;

void enque(int element){
    if(length == MAX){    
       printf("queue overflow");
        return;
    }
    circularQueue.r = (circularQueue.r+1)%MAX;
    circularQueue.arr[circularQueue.r] = element;
    length++;
}

int deque(){
    if(length == 0){
        printf("queue underflow");
        return;
    }
    circularQueue.f = (circularQueue.f+1)%MAX;
    length--;
    return circularQueue.arr[circularQueue.f];
}
void display(){
    if(length == 0){
        printf("queue underflow");
        return; 
    }
    for(int i=circularQueue.f+1;i<=length;i--){
            printf("%d",circularQueue.arr[i]);
        }
    
}

void main(){
    circularQueue.f = -1;
    circularQueue.r = -1;
    enque(10);
    enque(20);
    enque(30);
    display();
    printf("\n");  // Should print: 10 20 30
    
    deque();    // Removes 10
    display();  // Should print: 20 30
    
    printf("\n");
    enque(40);
    enque(50);
    display();  // Should print: 20 30 40 50
    
    printf("\n");
    enque(60);  // Should wrap around
    display();  // Should print: 20 30 40 50 60
    
    printf("\n");
    enque(70);  // Should cause overflow
    deque();    // Removes 20
    display();  // Should print: 30 40 50 60
    
    printf("\n");
    enque(70);  // Should succeed now
    display();
    
    printf("\n");  // Should print: 30 40 50 60 70
}
