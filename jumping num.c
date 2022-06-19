#include<stdio.h>
int check(int);
int main()
{
    int x,i,z=0;
    scanf("%d",&x);
    printf("input: %d\n\n",x);
    for(i=1;i<x;i++)
    {
        if(check(i)==1)
        {
            printf("%d  ",i);
            z++;
        }
    }
    return 0;
}
int check(int n)
{
    int a,b,c=0;
    while(n>10)
    {
        a=n%10;
        n=n/10;
        b=n%10;
        if(!((a+1==b)||(a-1==b)))
            c++;
    }
    if(c==0)
        return 1;
    else
        return 0;
}
