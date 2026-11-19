
#include<stdio.h>

int add(int a, int b);

int main()
{
    int result;

    result = add(10, 20);

    printf("Sum = %d", result);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}
