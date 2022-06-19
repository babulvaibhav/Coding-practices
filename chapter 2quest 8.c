#include<stdio.h>
main()
{
    int C,D,e;
    /*printf("Enter number C = ");
    scanf("%d",&C);
    printf("\nEnter number D = ");
    scanf("%d",&D);
    printf("\nNumber C = %d ",D);
    printf("\n\nNumber D = %d",C);*/
    printf("Enter value of C=");
    scanf("%d",&C);
    printf("Enter value of D= ");
    scanf("%d",&D);
    e=C;
    C=D;
    D=e;
    printf("New value of C= %d",C);
    printf("New value of D= %d ",D);



}
