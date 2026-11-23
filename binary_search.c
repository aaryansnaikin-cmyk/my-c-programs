#include<stdio.h>
int main()
{
    int numbers[5]={10,20,30,40,50};
    int key=40;
    int i;
    int found = 0;
    for (i=0;i<5;i++)
        {
            if (numbers[i] == key)
        {
            printf("Element found at index %d\n",i);
            found = 1;
            break;
        }
}
    if (found==0)
    {
        printf("Element not found\n");
    }
    return 0;
}
