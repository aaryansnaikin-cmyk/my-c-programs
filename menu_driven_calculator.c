 #include<stdio.h>
int main()
{
    int choice, a, b, sum, sub;
    do 
        {
            printf("1. Addition\n");
            printf("2. Subtraction\n");
            printf("3. Exit\n");
            printf("Enter your choice!\n");
            scanf("%d",&choice);
            if (choice==1)
            {
                printf("Enter first number :\n");
                scanf("%d",&a);
                printf("Enter second number :\n");
                scanf("%d",&b);
                sum=a+b;
                printf("Sum=%d\n",sum);
            }
            else if (choice==2)
            {
             printf("Enter first number :\n");
                scanf("%d",&a);
                printf("Enter second number :\n");
                scanf("%d",&b);
                sub=a-b;
                printf("Difference=%d\n",sub);
            }
        }
        while(choice!=3);
    return 0;
}
