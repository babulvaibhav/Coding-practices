#include<stdio.h>
main()
{
    //to find profit or loss
    int sp,cp;
    printf("Enter the cost price - ");
    scanf("%d",&cp);
    printf("\nEnter the selling price - ");
    scanf("%d",&sp);
    if(sp>cp)
        printf("You made a profit of - %d",sp-cp);
    else if (sp==cp)
        printf("No profit no loss");
    else
        printf("you made a loss of - %d ",cp-sp);

}
