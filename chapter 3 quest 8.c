#include<stdio.h>
#include<math.h>
main()
{
    float num;
    printf("Enter the number- ");
    scanf("%f",&num);
    if(num>=0)
        printf("Absolute of the entered number is %f",num);
    else
        printf("Absolute of the entered number is %f",-1*num);
}
