#include<stdio.h>
main()
{
    int l,b,a,p;
    printf("Enter the length of rectangle- ");
    scanf("%d",&l);
    printf("Enter the width of rectangle- ");
    scanf("%d",&b);
    a=l*b;
    p=2*(l+b);
    if (a>p)
        printf("Area of the rectangle is greater than its perimeter.");
    else if(a==p)
        printf("Area of the rectangle is equal to its perimeter.");
    else
        printf("Area of the rectangle is less than its perimeter.");
}
