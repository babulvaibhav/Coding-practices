#include<stdio.h>
main()
{
    int x,y;
    printf("Enter the x-cordinate - ");
    scanf("%d",&x);
    printf("Enter the y-cordinate - ");
    scanf("%d",&y);
    printf("You entered the co-ordinates of the point as - (%d,%d)",x,y);
    if (x==0&&y!=0)
        printf("\nThe point lies on the y axis.");
    else if (y==0&&x!=0)
        printf("\nThe point lies on the x axis.");
    else if (x==0&&y==0)
        printf("\nThe point lies on the origin .");
    else
        printf("\nThe point neither lie on any axis nor on origin.");

}
