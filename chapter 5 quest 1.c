#include<stdio.h>
int main()
{
    //over time payment calculation
    int hours,i=1,j;
    for(i=1;i<=10;i++)
    {
        printf("Enter the number of working hours for employee %d- ",i);
        scanf("%d",&hours);
        if(hours<40)
         printf("No overtime payment\n\n");
        else
        {
           j=(hours-40)*12;
           printf("Overtime payment is %d\n\n",j);
        }
    }
}
