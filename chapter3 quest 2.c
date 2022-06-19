#include<stdio.h>
main()
{
    int num;
    //to check whether the number is even or odd.
    printf("Enter the number - ");
    scanf("%d",&num);
    if(num%2==0)
        printf("The number %d is EVEN . ",num);
    else
        printf("The number %d is ODD .",num);
}
