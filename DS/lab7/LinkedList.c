#include<stdio.h>

typedef struct node{
    int info;
    int* next;
}node;

int length=0;
node* start = NULL;

node* createNode(int info){
    node* newNode = (node*)malloc(sizeof(node));
    newNode->info = info;
    newNode->next = NULL;
    return newNode;
}

node* insert(int info){
        if(start == NULL){
            start = createNode(info);
            return;
        }
        node* current = start;
        while(current->next!= NULL){
            current = current->next;
        }
        current->next = createNode(info);
        length++;
}
node* insertAt(int info,int target,int pos){
    if(start == NULL){
        printf("empty list creating a node at position 0");
        start = createNode(info);
        return;
    }
    node* current = start;
    node* temp = NULL;
    if(pos = 1){
        while(current->info !=target && current->->next !=NULL){
        current=current->next;
        temp = current ->->next;
        }
        node* newNode = createNode(info);
        newNode->next = temp;
        current->next = newNode;
    }

}
void display(){
    if(start == NULL){
        printf("empty linked list\n");
        return;
    }
    node* current = start;
    for(int i=0;i<=length;i++){
        printf("%d\n",current->info);
        current = current->next;
    }
}

void main(){
    display();
}
