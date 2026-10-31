#include<stdio.h>
int main()
{
  int a, b, c;
printf("Enter three numbers :");
scanf("%d%d%d",&a,&b,&c);
if (a>=b && a>=c)
{
printf(" A is the largest : %d",a);
}
else if (b>=a && b>=c)
{
printf(" B is the largest : %d",b);
}
else 
{
printf(" C is the largest : %d",c);
}
return 0;
}
