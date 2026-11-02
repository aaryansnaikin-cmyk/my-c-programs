
#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = 0, rear = -1;

void enqueue()
{
    int x;

    if (rear == MAX - 1)
        printf("Queue Overflow!\n");
    else
    {
        printf("Enter number: ");
        scanf("%d", &x);
        queue[++rear] = x;
    }
}

void dequeue()
{
    if (front > rear)
        printf("Queue Underflow!\n");
    else
    {
        printf("Deleted: %d\n", queue[front]);
        front++;
    }
}

void display()
{
    int i;

    if (front > rear)
        printf("Queue is empty\n");
    else
    {
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);

        printf("\n");
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n1. Enqueue 2. Dequeue 3. Display 4. Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}
