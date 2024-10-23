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
        return 1;
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
    for(int i=0;i<length;i++){
            printf("%d",circularQueue.arr[(circularQueue.f+i+1)%MAX]);
        }    
}

void main(){
    int choice;
    int input;
    while(1)
    {   
        printf("1:enque 2:deque 3:display : ");
        scanf("%d",&choice);
        switch (choice){

        case 1:
            printf("enter the number to enque : ");
            scanf("%d",&input);
            enque(input);
            break; 
        case 2:
            deque();
            break;
        case 3:
            display();
            printf("\n");
            break;

        default:
            printf("incorrect choice inputted\n");
            break;
        }
    }
    
} 
