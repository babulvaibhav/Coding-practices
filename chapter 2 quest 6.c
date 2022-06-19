#include<stdio.h>
#include<math.h>
main()
{
    //to calculate wind chill factor
    double t,v,wcf;
    printf("Enter the temperature - ");
    scanf("%lf",&t);
    printf("Enter wind velocity - ");
    scanf("%lf",&v);
    wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
    printf("Wind chill factor is = %lf",wcf);
}
