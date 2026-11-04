#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value)
{
    stack[++top] = value;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char postfix[MAX];
    int i;
    int A, B, result;

    printf("Enter postfix expression: ");
    scanf("%99s", postfix);

    for (i = 0; postfix[i] != '\0'; i++)
    {
        if (isdigit((unsigned char)postfix[i]))
        {
            push(postfix[i] - '0');
        }
        else
        {
            A = pop();
            B = pop();

            if (postfix[i] == '+')
                result = B + A;

            else if (postfix[i] == '-')
                result = B - A;

            else if (postfix[i] == '*')
                result = B * A;

            else if (postfix[i] == '/')
                result = B / A;

            else if (postfix[i] == '%')
                result = B % A;

            else if (postfix[i] == '^')
                result = pow(B, A);

            else
            {
                printf("Invalid operator\n");
                return 1;
            }

            push(result);
        }
    }

    result = pop();

    printf("Result : %d\n", result);

    return 0;
}

  
