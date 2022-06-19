#include<stdio.h>
#include<stdio.h>
main()
{
    float x,y,r,angle;
    printf("CONVERSION OF CARTESIAN - POLAR COORDINATES");
    printf("\n\nEnter the (x,y) co-ordinates");
    printf("\n\nEnter x-cordinate- ");
    scanf("%f",&x);
    printf("\nEnter the y-cordinate- ");
    scanf("%f",&y);
    r=sqrt(pow(x,2.0)+pow(y,2.0));
    angle=atan(y/x);
    printf("Polar co-rdinate of given cartesian co-rdinate is - (%f ,%f)",r,angle);
}
