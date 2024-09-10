#include <stdio.h>
#include <string.h>

struct stack
{
    int arr[100];
    int top;
} s;

char pfix[100];

int pop()
{
    return s.arr[s.top--];
}

void push(int op)
{
    s.arr[++s.top] = op;
}

int isEmpty()
{
    return (s.top == -1);
}

void evaluate()
{
    int op1, op2;
    s.top = -1;

    for (int i = strlen(pfix) - 1; i >= 0; i--)
    {
        if (pfix[i] == '+' || pfix[i] == '-' || pfix[i] == '*' || pfix[i] == '/')
        {
            op1 = pop();
            op2 = pop();
            switch (pfix[i])
            {
                case '+':
                    push(op1 + op2);
                    break;
                case '-':
                    push(op1 - op2);
                    break;
                case '*':
                    push(op1 * op2);
                    break;
                case '/':
                    push(op1 / op2);
                    break;
            }
        }
        else
        {
            push(pfix[i] - '0');
        }
    }
}

int main()
{
    printf("Enter prefix expression: ");
    gets(pfix);  // Assuming pfix already holds a valid prefix expression
    evaluate();
    printf("Value: %d\n", s.arr[s.top]);
}
