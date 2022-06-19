#include<stdio.h>
int main()
{
    // BMI calculation
    float w,h,bmi;
    printf("*******BMI CALCULATION******");
    printf("\n\nEnter the weight of person in Kg- ");
    scanf("%f",&w);
    printf("Enter the height of person in meters - ");
    scanf("%f",&h);
    bmi=w/(h*h);
    if(bmi<=15)
        printf("The person is under BMI category of STARVATION");
    else if(bmi>15&&bmi<=17.5)
        printf("The person is under BMI category of ANOREXIC ");
    else if(bmi>17.5&&bmi<=18.5)
        printf("The person is under BMI category of UNDERWEIGHT ");
    else if(bmi>18.5&&bmi<=24.9)
        printf("The person is under BMI category of IDEAL ");
    else if(bmi>24.9&&bmi<=25.9)
        printf("The person is under BMI category of OVERWEIGHT ");
     else if(bmi>25.9&&bmi<=30.9)
        printf("The person is under BMI category of OBESE ");
     else if(bmi>=40)
        printf("The person is under BMI category of MORBIDLY OBESE ");
}
