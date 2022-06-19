#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of triangle ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c)
    {
        printf("triangle is equilateral");
        exit(0);
    }
    else if(a==b||b==c||a==c)
    {
        printf("triangle is isosceles");
    exit(0);
    }
    else if(a!=b&&b!=c&&a!=c)
        printf("triangle is scalene");
}
