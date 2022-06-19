#include<stdio.h>
#include<conio.h>
void TOH(int,char,char,char);
int main()
{
    char beg='A',aux='B',end='C';
    int n;
    printf("Enter the number of discs - ");
    scanf("%d",&n);
    printf("Steps to be followed are as follows:-\n");
    TOH(n,beg,aux,end);
}
void TOH(int n,char beg,char aux,char end)
{
    if(n>=1)
    {
        TOH(n-1,beg,end,aux);
        printf("%c to %c\n",beg,end);
        TOH(n-1,aux,beg,end);
    }
}
