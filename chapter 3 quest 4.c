#include<stdio.h>
main()
{    // to find the day on01/01 if monday on 01/01/01
    int year,x,y,z;
    printf("Enter the year- ");
    scanf("%d",&year);
    x=(year-1)%7;
    y=(year-1)/4;
    z=x+y;
    if(z==1)
        printf("Day on 01/01/%d is - Tuesday",year);
    else if(z==2)
        printf("Day on 01/01/%d is - Wednesday",year);
    else if(z==3)
        printf("Day on 01/01/%d is - Thursday",year);
    else if(z==4)
        printf("Day on 01/01/%d is - Friday",year);
    else if(z==5)
        printf("Day on 01/01/%d is - Saturday",year);
    else if(z==6)
        printf("Day on 01/01/%d is - Sunday",year);
    else if(z==7)
        printf("Day on 01/01/%d is - Monday",year);




}
