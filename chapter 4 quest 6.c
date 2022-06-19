#include<stdio.h>
int main()
{
    int w;
    printf("Enter the weight of boxer- ");
    scanf("%d",&w);
    if(w<115)
        printf("Boxer is in flyweight category");
    else if(w>=115&&w<=121)
        printf("Boxer is in bantamweight category");
    else if(w>=122&&w<153)
        printf("Boxer i in featherweight category");
    else if(w>=154&&w<=189)
        printf("Boxer is in midleweight category");
    else
        printf("Boxer is in heavyweight category");
    return 0;
}
