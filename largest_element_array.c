#include<stdio.h>
int main()
{
    int numbers[5]={10,50,20,80,30};
    int i, max=numbers[0];
    for (i=1;i<5;i++)
        {
            if (numbers[i]>max)
                max=numbers[i];
        }
    printf("Largest=%d",max);
    return 0;
}
