#include<stdio.h>
#include<stdlib.h>
int main()
{
    float H,C,T;
    printf("******To find the grade of steel******");
    printf("\n\nEnter the hardness index- ");
    scanf("%f",&H);
    printf("Enter the carbon content- ");
    scanf("%f",&C);
    printf("Enter the tensile strength- ");
    scanf("%f",&T);
     if(H>50&&C<0.7&&T>5600)
       {
           printf("\nThe steel is of grade 10");
           exit(0);
       }
     if(H>50&&C<0.7&&T<=5600)
       {
        printf("\nThe steel is of grade 9");
        exit(0);
       }
     if(H<=50&&C<0.7&&T>5600)
        {
            printf("\nThe steel is of grade 8");
            exit(0);
        }
     if(H>50&&C>=0.7&&T>5600)
        {
            printf("\nThe steel is of grade 7");
            exit(0);
        }
     if(H>50||C<0.7||T>5600)
        printf("\nThe steel is of grade 6");
     else
        printf("\nThe steel is of grade 5");

}
