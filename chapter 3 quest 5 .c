#include<stdio.h>
main()
{
    int num,x,y,z,t,u,v,p,q,rev;
    printf("Enter the five-digit number- ");
    scanf("%d",&num);
    x=num/10000;
    y=num-x*10000;
    z=y/1000;
    t=y-z*1000;
    u=t/100;
    v=t-u*100;
    p=v/10;
    q=v-p*10;
    rev=q*10000+p*1000+u*100+z*10+x;
    printf("The reversed number is %d",rev);
}
