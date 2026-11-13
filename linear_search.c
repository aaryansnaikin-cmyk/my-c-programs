
#include<stdio.h>

int main()
{
    int numbers[5] = {10,20,30,40,50};
    int key = 40;
    int i;

    for(i=0;i<5;i++)
    {
        if(numbers[i] == key)
        {
            printf("Found at index %d\n",i);
            break;
        }
    }

    return 0;
}
