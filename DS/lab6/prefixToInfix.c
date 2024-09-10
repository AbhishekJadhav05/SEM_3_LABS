#include <stdio.h>
#include <string.h>
struct stack
{
    char arr[100][100];
    int top;
} s;
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

int main()
{
    char pfix[100];
    s.top = -1;

    printf("Enter prefix: ");
    gets(pfix);
    conversion(pfix);

    printf("Infix: %s\n", s.arr[0]);

    return 0;
}

