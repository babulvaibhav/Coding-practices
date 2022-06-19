#include<stdio.h>
int main()
{
  int x,y,z=0,p=0,i;

     printf("Enter two numbers - ");
     scanf("%d%d",&x,&y);
  /*first we put both of the number
  in two different variables such
  that it won't get lost .*/
      z=x;
      p=y;
  for(i=1;i<p;i++)
  {
      x=x*z;
  }
        printf("%d raised to power %d is %d ",z,p,x);

  for(i=1;i<z;i++)
  {
      y=y*p;
  }
        printf("\n\n%d raised to power %d is %d",p,z,y);
        return 0;
}
