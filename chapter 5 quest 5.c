#include<stdio.h>
int main()
{
    int num=1,x,y,p,z,q;
    printf("ARMSTRONG numbers between 1 to 500 are as follows :- ");
    for(num=1;num<=500;num++)
    {
        x=num/100;
        y=num%100;
        z=y/10;
        p=y%10;
        q=(x*x*x)+(z*z*z)+(p*p*p);
        if(num==q)
            printf("\n%d\n\n",num);
    }
}
