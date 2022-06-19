#include<stdio.h>
#include<math.h>
main()
{
    //to find all t- ratios for given angle
    double x;
    printf("Enter the value of angle - ");
    scanf("%lf",&x);
    printf("sin=%lf\ncosine=%lf\ntan=%lf",sin(x),cos(x),tan(x));
    printf("\ncosec=%lf\nsec=%lf\ncot=%lf",1/sin(x),1/cos(x),1/tan(x));
}
