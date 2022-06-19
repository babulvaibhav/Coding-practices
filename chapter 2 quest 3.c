#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c,s,area;
    printf("Enter the sides of triangle- ");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle is - %f",area);
}
