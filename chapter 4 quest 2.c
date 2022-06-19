#include<stdio.h>
int main()
{
    char ch;
    int x;
    printf("Enter a character - ");
    scanf("%c",&ch);
    x=ch;
    if(x>=65&&x<=90)
        printf("Entered character is a capital letter ");
    else if(x>=97&&x<=122)
        printf("Entered character is a small letter ");
    else if(x>=48&&x<=57)
        printf("Entered character is a digit ");
    else if((x>=0&&x<=47)||(x>=58&&x<=64)||(x>=91&&x<=96)||(x>=123&&x<=127))
        printf("Entered character is A special symbol");

}
