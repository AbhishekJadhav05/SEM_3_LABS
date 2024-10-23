#include<stdio.h>
#include<stdlib.h>
#define max 10
typedef struct stacks
{
    int top;
    char arr[max];
}Stack;

void push(Stack *stack,char val){
    if(stack->top == max-1){
        printf("stack overflow");
        return;
    }
    stack->arr[++stack->top] = val;
}
void pop(Stack *stack){
    if(stack->top == -1){
        printf("stack underflow");
        return;
    }
    stack->top--;
}
int isEmpty(Stack *stack){
    if(stack->top == -1){
        return 1;
    }
    return 0;
}
char peek(Stack *stack){
    return stack->arr[stack->top];
}
void display(Stack *stack){
    if(stack->top == -1){
        printf("stack underflow");
        return;
    }
    for(int i=0;i<=stack->top;i++){
        printf("%c ",stack->arr[i]);
    }
}

int parenthesisCheck(char *string){
    Stack parenthesis;
    parenthesis.top = -1;
    for(int i=0;string[i] !='\0';i++){
        if(string[i] == '('){
            push(&parenthesis,string[i]);
        }
        if(string[i] == ')' && !isEmpty(&parenthesis)){
            if(peek(&parenthesis) == '('){
                pop(&parenthesis);
            }else{
                return 0;
            }
            
        }
    }
    if(isEmpty(&parenthesis)){
        return 1;
    }
    return 0;
}

void clearStack(Stack *stack){
    while (isEmpty(stack))
    {
        pop(stack);
    }
}
void main(){
    Stack s1,s2,s3;
    char input[3*max];
    s1.top = -1;
    s2.top = -1;
    s3.top = -1;

    printf("enter the input string : ");
    scanf("%s",input);
    for(int i=0;input[i] !='\0';i++){
        if(input[i] == 'g' || input[i] == 'r'){
            continue;
        }
        if(input[i]>=65 && input[i] <= 122){
            push(&s1,input[i]);
        }
        if(input[i]>=48 && input[i] <= 57){
            push(&s2,input[i]);
        }
        if(input[i] == '(' || input[i] == ')'){
            push(&s3,input[i]);
        }
        
    }
    display(&s2);
    display(&s1);
    display(&s3);
    if(parenthesisCheck(input)){
        for(int i=0;input[i] !='\0';i++){
            if(input[i] == '(' || input[i] == ')'){
                input[i] = 'g';
            }
        }
    }else{
        for(int i=0;input[i] !='\0';i++){
            if(input[i] == '(' || input[i] == ')'){
                input[i] = 'r';
            }
        }
    }
    clearStack(&s1);
    for(int i=0;input[i] != '\0';i++){
        if(input[i]>=65 && input[i] <= 122){
            push(&s1,input[i]);
        }
    }
    display(&s1);
}
