#include<stdio.h>
main()
{
    double x,y,r,a,b;
    printf("Enter the x cordinate of center-");
    scanf("%lf",&x);
    printf("Enter the y cordinate of center-");
    scanf("%lf",&y);
    printf("Enter the radius of the circle- ");
    scanf("%lf",&r);
    printf("Enter the x and y cordinate of the point(x,y)- ");
    scanf("%lf%lf",&a,&b);
    if (pow(a-x,2.0)+pow(b-y,2.0)==pow(r,2.0))
        printf("The point lies on the circle.");
    else if (pow(a-x,2.0)+pow(b-y,2.0)<pow(r,2.0))
        printf("The point lies inside the circle.");
    else
        printf("The point lies outside of the circle.");




}
