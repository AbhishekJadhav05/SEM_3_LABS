#include <stdio.h>
#include <string.h>
#define MAX 100

struct stack
{
    char arr[100][100];
    int top;
} s;

struct stack1
{
    char arr[MAX];
    int top;
}stack;

void push1(char element){
    if(stack.top == MAX-1){
        printf("stack overflow");
        return;
    }
    stack.arr[++stack.top] = element;
}

char pop1(){
    if(stack.top == -1){
        printf("Stack underflow");
        return;
    }
    return stack.arr[stack.top--];
}

char peek(){
    return stack.arr[stack.top];
}

int isEmpty(){
    if(stack.top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(char sym[])
{
    strcpy(s.arr[++s.top], sym);
}
char* pop()
{
    return s.arr[s.top--];
}
void conversion(char pfix[])
{
    char res[100];
    for (int i = strlen(pfix) - 1; i >= 0; i--)
    {
        char op1[100], op2[100], sym[2];
        sym[0] = pfix[i];
        sym[1] = '\0';

        switch (pfix[i])
        {
            case '+':
            case '-':
            case '*':
            case '/':
                strcpy(op1, pop());
                strcpy(op2, pop());
                strcpy(res, "(");
                strcat(res, op1);
                strcat(res, sym);
                strcat(res, op2);
                strcat(res, ")");
                push(res);
                break;

            default:
                push(sym);
                break;
        }
    }
}

int priority(char element){
    switch (element)
    {
    case '+':
    case '-':
        return 1;

    case '*':
    case '/':
        return 2;
    
    case '(': //lowest priority as it will not interfere with other operators.
    case ')':
        return 0;

    default:
        return 3;
    }
}

int main()
{
    char pfix[100];
    s.top = -1;

    printf("Enter prefix: ");
    gets(pfix);
    conversion(pfix);

    char output[MAX];
    int index = 0;
    printf("enter infix string : ");
    scanf("%s",s.arr[0]);
    
    for(int i=0;s.arr[0][i] != '\0';i++){
        //loop through the s.arr[0] array

        if(priority(s.arr[0][i]) == 3){
            output[index] = s.arr[0][i];
            index++;
        }

        else if(s.arr[0][i] =='('){
            push1('(');
        }

        else if (s.arr[0][i] == ')') {
            // Pop until '(' is found
            while (!isEmpty() && peek() != '(') {
                output[index++] = pop1();
            }
            if (!isEmpty()) {
                pop1();  // Discard '('
            }
        }

        else {
            // Operator encountered, check precedence
            while (!isEmpty() && (priority(s.arr[0][i]) <= priority(peek()))) {
                output[index++] = pop1();
            }
            push1(s.arr[0][i]);
        }
    }
    while(!isEmpty()){
        output[index] = pop1();
        index++;
    }
    output[index] = '\0';
    puts(output);

    return 0;
}

