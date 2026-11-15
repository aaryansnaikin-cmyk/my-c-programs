
#include<stdio.h>

int main()
{
    int arr[10] = {10,20,30,40,50};
    int n = 5;
    int pos = 2;
    int value = 25;
    int i;

    for(i=n; i>pos; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[pos] = value;

    n++;

    printf("Updated array:\n");

    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
