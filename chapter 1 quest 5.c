#include<stdio.h>
main()
{
    // programme to calculate area and perimeter of rectangle.
    float x,y,z,p,f,a,c;
    printf("Enter the length of rectangle in cm - ");
    scanf("%f",&x);
    printf("Enter the width of rerctangle in cm - ");
    scanf("%f",&y);
    z=x*y;
    p=2*x+2*y;
    printf("Area of the given rectangle is = %f sq.cm \n perimeter of the rectangle is = %f cm",z,p);

    //to calculate area and circumference of a circle
    printf("\n\n\nEnter the radius of circle in cm -  ");
    scanf("%f",&f);
    a=3.14*f*f;
    c=2*3.14*f;
    printf("area of the circle is = %f sq.cm \n circumference is = %f cm",a,c);
}
