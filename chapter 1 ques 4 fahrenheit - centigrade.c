#include<stdio.h>
main()
{
    int x;
    float y,z;
  printf("                         FAHRENHEIT CENTIGRADE CONVERSION");
  printf("\n\n1. fahrenheit to centigrade\n2. centigrade to farenheit \n ");
  printf("Choose option - ");
  scanf("%d",&x);
    if(x==1)
    {
        printf("enter the temperature in fahrenheit - ");
        scanf("%f",&y);
        printf("Temp. in centigrade is - %f",(0.56*y)-(0.56*32) );
    }
     if(x==2)
     {
         printf("enter the temp. in centigrade - ");
         scanf("%f",&z);
         printf("Temp. in fahrenheit is - %f",(1.8*z)+32);
     }
     if(x>2)
        printf("\ninvalid choice");
        // fahrenheit centigrade conversion
 }
