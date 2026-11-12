#include<stdio.h>
int main()
{
    int numbers[5] = {45, 12, 67, 8, 29};
    int i, min=numbers[0];
    for (i=1;i<5;i++)
        {
            if (numbers[i]<min)
                min=numbers[i];
        }
    printf("Smallest=%d",min);
    return 0;
}
