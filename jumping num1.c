#include<stdio.h>
int main()
{
    int x,i,k=0,a,b,n=0;
    printf("Enter the number:- ");
    scanf("%d",&x);
    for(i=0;i<=x;i++)
    {
      if(i/10==0)
          printf("%d  ",i);
      else
      {  k=i;
         n=0;
         while(k>10)
         {
             a=k%10;
             k=k/10;
             b=k%10;
             if(!((a-b==1)||(b-a==1)))
              n++;
        }
          if(n==0)
            printf(" %d  ",i);
      }
    }
}
