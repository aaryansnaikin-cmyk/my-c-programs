#include<stdio.h>
int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int i; 
    int max = numbers[0];
    for (i=0; i<5; i++)
        {
            if (numbers[i]>max)
            {
                max=numbers[i];
            }
        }
    printf("Largest elements :%d",max);
    return 0;
}
