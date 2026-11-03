
#include <stdio.h>
#include <ctype.h>

char stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    return stack[top--];
}

int priority(char x)
{
    if (x == '^')
        return 3;

    if (x == '*' || x == '/' || x == '%')
        return 2;

    if (x == '+' || x == '-')
        return 1;

    return 0;
}

int main()
{
    char exp[100], x;
    int i = 0;

    printf("Enter the infix expression: ");
    scanf("%99s", exp);

    while (exp[i] != '\0')
    {
        x = exp[i];

        if (isalnum((unsigned char)x))
            printf("%c", x);

        else if (x == '(')
            push(x);

        else if (x == ')')
        {
            while (top != -1 && stack[top] != '(')
                printf("%c", pop());

            pop();
        }

        else
        {
            while (top != -1 &&
                   stack[top] != '(' &&
                   (priority(stack[top]) > priority(x) ||
                   (priority(stack[top]) == priority(x)
                    && x != '^')))
            {
                printf("%c", pop());
            }

            push(x);
        }

        i++;
    }

    while (top != -1)
        printf("%c", pop());

    printf("\n");

    return 0;
}
