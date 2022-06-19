#include<stdio.h>
main()
{
    int R,S,A;
    printf("Enter the age of Ram- ");
    scanf("%d",&R);
    printf("Enter the age of Shyam- ");
    scanf("%d",&S);
    printf("Enter the age of Ajay- ");
    scanf("%d",&A);
    if(R<S&&R<A)
        printf("\nRam is the youngest one.");
    else if(S<R&&S<A)
        printf("\nShyam is the youngest one. ");
    else
        printf("\nAjay is the youngest one.");
}
