#include<stdio.h>
main()
{
    int x,a=1189,b=841;
    printf("                            Find dimension of paper for sizes A0 to A8\n\n\nInput the paper size - A");
    scanf("%d",&x);
    switch(x)
    {
    case 0:
        printf("Dimension of A0 paper is - %dmm* %dmm",a,b);
        break;
    case 1:
        printf("Dimension of A1 paper is - %dmm* %dmm",b,a/2);
        break;
    case 2:
        printf("Dimension of A2 paper is - %dmm* %dmm",a/2,b/2);
        break;
    case 3:
        printf("Dimension of A3 paper is - %dmm* %dmm",b/2,a/4);
        break;
    case 4:
        printf("Dimension of A4 paper is - %dmm* %dmm",a/4,b/4);
        break;
    case 5:
        printf("Dimension of A5 paper is - %dmm* %dmm",b/4,a/8);
        break;
    case 6:
        printf("Dimension of A6 paper is - %dmm* %dmm",a/8,b/8);
        break;
    case 7:
        printf("Dimension of A7 paper is - %dmm* %dmm",b/8,a/16);
        break;
    case 8:
        printf("Dimension of A8 paper is - %dmm* %dmm",a/16,b/16);
        break;

    }
}
