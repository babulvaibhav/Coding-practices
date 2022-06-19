#include<stdio.h>
main()
{
    float x,y,z;
    printf("Enter 1st angle-");
    scanf("%f",&x);
    printf("Enter 2nd angle-");
    scanf("%f",&y);
    printf("Enter 3rd angle- ");
    scanf("%f",&z);
    if (x+y+z==180)
        printf("Triangle is valid.");
    else
        printf("Triangle is not valid.");

}
