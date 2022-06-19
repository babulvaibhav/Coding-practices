#include<stdio.h>
main()
{
   int x1,y1,x2,y2,x3,y3;
   printf("Enter the three points:");
   printf("\nEnter 1st point- ");
   scanf("%d%d",&x1,&y1);
   printf("Enter 2nd point- ");
   scanf("%d%d",&x2,&y2);
   printf("Enter 3rd point- ");
   scanf("%d%d",&x3,&y3);
   if(y1*(x3-x2)+y2*(x1-x3)+y3*(x2-x1)==0)
    printf("The points lies on the same straight line.");
   else
    printf("The points don't lies on same straight line");

}
