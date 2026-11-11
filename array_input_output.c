#include<stdio.h>
int main()
{
    int marks[5];
    int i;
    for (i=0;i<5;i++)
        {
            printf("Enter a marks :\n");
            scanf("%d",&marks[i]);
        }
    for (i=0;i<5;i++)
    {
        printf("%d\n",marks[i]);
    }
    return 0;
}
