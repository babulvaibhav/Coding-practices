#include<stdio.h>

void dectobin(int num){

      int i,num2=num;
      int arr[10];
      for(i=0;num>0;i++){
        arr[i]= num%2;
        num= num/2;

      }
      printf("Binary of %d is  : ",num2);
      for(i=(i-1);i>=0;i--){
        printf("%d",arr[i]);

      }
}
int main()
{
    int num=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    dectobin( num );

    return 0;
}
