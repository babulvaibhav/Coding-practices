#include<stdio.h>
main()
{
    double x,y,z,k,l;
    printf("Enter the distance in kilometers = ");
    scanf("%lf",&x);
    y=x*1000;
    z=x*3150;
    k=x*37800;
    l=x*100000;
    printf("\nDistance in meters is %lf\n",y);
    printf("Distance in feets is %lf\n",z);
    printf("Distance in inches is %lf\n",k);
    printf("Distance in centimeters is %lf",l);

}

