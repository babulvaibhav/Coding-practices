#include<stdio.h>
main()
{
    float a,b,c,d,e,f,g;
    printf("                  MARKSHEET\n");

    printf("Marks in 1st subject - ");
    scanf("%f",&a);
         if(a>100)
           printf("invalid entry");
         else
    printf("\nMarks in 2nd subject - ");
    scanf("%f",&b);
         if(b>100)
            printf("invalid entry");
         else
    printf("\nMarks in 3rd subject - ");
    scanf("%f",&c);
         if(c>100)
            printf("invalid entry");
         else
    printf("\nMarks in 4th subject - ");
    scanf("%f",&d);
         if(d>100)
            printf("invalid entry");
         else
    printf("\nMarks in 5th subject - ");
    scanf("%f",&e);
         if(e>100)
            printf("invalid entry");
         else
    f=a+b+c+d+e;
    printf("\nTotal marks of the student is - %f",f);
    g=f/5;
    printf("\n\nAggregate percentage of the student is - %f%",g);
    // marksheet of a student



}
