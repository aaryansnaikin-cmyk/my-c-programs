
#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 50, 30, 40};
    int sorted = 1;

    for(int i = 0; i < 4; i++)
    {
        if(arr[i] > arr[i+1])
        {
            sorted = 0;
            break;
        }
    }

    if(sorted == 1)
    {
        printf("Array is sorted");
    }
    else
    {
        printf("Array is not sorted");
    }

    return 0;
}
