#include<stdio.h>
#include<string.h>
void num(char *ch){
   int vowels=0,cons=0;
   while(*ch){
        if((*ch>=65&&*ch<=90)||(*ch>=97&&*ch<=122)){
        if(*ch=='a'||*ch=='e'||*ch=='i'||*ch=='o'||*ch=='u'||*ch=='A'||*ch=='E'||*ch=='I'||*ch=='O'||*ch=='U'){
    vowels++;
        }
        else{
            cons++;
        }
        }
    ch++;
   }
   printf("Number of consonants is : %d\n",cons);
   printf("Number of vowels is : %d",vowels);

}

int main()
{
   int length,vowels,cons;
   char ch[20];
   printf("Enter the string : ");
   gets(ch);
   num(ch);

}
