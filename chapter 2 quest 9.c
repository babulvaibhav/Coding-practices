#include<stdio.h>
main()
{
    /*to find minimum number of notes for a
    given sum of money in denomination 1,2,5,10,50,100*/
    int x,R,S,T,U,V;
    printf("Enter the amount of money - ");
    scanf("%d",&x);
    if(x%100==0)
        printf("Minimum number of notes = %d ",x/100);
    else
    {
        R=x%100;
        if(R%50==0)
            printf("Minimum number of notes = %d",x/100+R/50);
        else
        {
            S=R%50;
            if(S%10==0)
                printf("Minimum number of notes = %d",x/100+R/50+S/10);
            else
            {
                T=S%10;
                if(T%5==0)
                printf("Minimum number of notes = %d",x/100+R/50+S/10+T/5);
                else
                {
                    U=T%5;
                    if(U%2==0)
                        printf("Minimum Number of notes = %d",x/100+R/50+S/10+T/5+U/2);
                    else
                    {
                        V=U%2;
                        printf("Minimum number of notes = %d",x/100+R/50+S/10+T/5+U/2+V);
                    }
                }

            }
        }
    }













}
