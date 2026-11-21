#include<stdio.h>
int main()
{
    int numbers[5]={10,20,30,40,50};
    int i, sum=0;
    for (i=0;i<5;i++)
        sum=sum+numbers[i];
    {
        printf("Sum = %d",sum);
    }
    return 0;
}
