#include<stdio.h>
int main()
{
   int factorial=1,i,num;
   printf("Enter a number");
   scanf("%d",&num);
   for(i=num;i>0;i--)
    factorial=factorial*i;
   printf("factorial of %d is %d ",num,factorial);
}
