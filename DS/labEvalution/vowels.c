/*
write a c program to remove vowels from a string using stacks.
*/
#include<stdio.h>
#define max 100

struct stack{
    int top;
    int arr[max];
}stack,stack1;

void push(char element){
    if(stack.top == max){
        return;
    }
    stack.arr[++stack.top] = element;
}

void push1(char element){
    if(stack1.top == max){
        return;
    }
    stack1.arr[++stack1.top] = element;
}
char pop(){
    if(stack.top == -1){
        return;
    }
    return stack.arr[stack.top--];
}

char peek(){
    return stack.arr[stack.top];
}
int isEmpty(){
    if(stack.top == -1){
        return 0;
    }
    else{
        return 1;
    }
}
void display(){
    for(int i=stack1.top;i>-1;i--){
        printf("%c",stack1.arr[i]);
    }
}
void main(){
    char input[max];
    char vowel;
    printf("enter a string : ");
    scanf("%s",input);
    for(int i=0;input[i] != '\0';i++){
        push(input[i]);
    }
    for(int i=0;input[i] != '\0';i++){
       vowel = peek();
       if(vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u'){
        pop();
       }else{
            push1(pop());
       }
    }
    display();
}
