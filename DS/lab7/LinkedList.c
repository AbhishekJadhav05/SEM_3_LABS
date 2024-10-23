#include<stdio.h>

typedef struct node{
    int info;
    int* next;
}node;

int length=0;
node* head = NULL;

node* createNode(int info){
    node* newNode = (node*)malloc(sizeof(node));
    newNode->info = info;
    newNode->next = NULL;
    return newNode;
}

node* insert(int info){
        if(head == NULL){
            head = createNode(info);
            printf("%d",*head);
            return;
        }
        node* current = head;
        while(current->next!= NULL){
            current = current->next;
        }
        current->next = createNode(info);
        length++;
}
void display(){
    if(head == NULL){
        printf("empty linked list\n");
        return;
    }
    node* current = head;
    printf("elements of list : ");
    for(int i=0;i<=length;i++){
        printf("%d ",current->info);
        current = current->next;
    }
}

void main(){
    insert(2);

}
