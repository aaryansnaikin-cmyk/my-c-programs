
#include<stdio.h>

void add(int a, int b);

int main()
{
    add(10, 20);

    return 0;
}

void add(int a, int b)
{
    int sum = a + b;

    printf("Sum = %d", sum);
}
