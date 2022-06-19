#include<stdio.h>
main()
{
    //to find factorial of number
    int x=1,y,z=1;
    printf("Enter the number ");
    scanf("%d",&y);
    while(x<=y)
    {
        z=z*x;
        x++;
    }
    printf("factorial of %d is = %d",y,z);
}
