#include<stdio.h>
int main()
{
    float side1,side2,side3;
    printf("********To check the validity of a traingle ********* ");
    printf("\n\nEnter the side 1 - ");
    scanf("%f",&side1);
    printf("Enter the side 2 - ");
    scanf("%f",&side2);
    printf("Enter the side 3 - ");
    scanf("%f",&side3);
    if((side1+side2>side3)&&(side2+side3>side1)&&(side1+side3>side2))
        printf("The triangle is valid");
    else
        printf("The triangle is not valid");
}
