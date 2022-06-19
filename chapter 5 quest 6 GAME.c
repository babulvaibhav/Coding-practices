#include<stdio.h>
int main()
{
    int sticks,x,i=21,j=0;
    printf("There are 21 match sticks.\nChoose either 1,2,3 or 4 matchsticks.");
    printf("\nThis game will be played between you and computer.");
    printf("\nWhoever is forced to pick the last matchstick will loose the game.\n");
    for(i=21;i>0;)
       {
          printf("\n\n******YOUR CHANCE*******\n");
          printf("\n\nPick the number of matchstick you want - ");
          scanf("%d",&sticks);
          i=i-sticks;
          printf("\nRemaining matchsticks = %d",i);
                if(sticks>4||sticks<1)
                   {
                     printf("\n\nInvalid selection. \n");
                     continue;
                   }

                else
                    {
                       if(i==20)
                         {
                            printf("\n\nCoice of computer is 4");
                            i=i-4;
                         }
                       else if(i==19)
                       {
                           printf("\n\nChoice of computer is 4");
                           i=i-4;
                       }
                       else if(i==18)
                       {
                           printf("\n\nChoice of computer is 4");
                           i=i-4;
                       }
                       else if(i==17)
                       {
                           printf("\n\nChoice of computer is 4");
                           i=i-4;
                       }
                       else if(i==15)
                       {
                           printf("\n\nChoice of computer is 4");
                           i=i-4;
                       }
                       else if(i==14)
                       {
                           printf("\n\nChoice of computer is 4");
                           i=i-4;
                       }
                       else if(i==13)
                       {
                           printf("\n\nChoice of computer is 4");
                           i=i-4;
                       }
                       else if(i==12)
                       {
                           printf("\n\nChoice of computer is 2");
                           i=i-2;
                       }
                       else if(i==11)
                       {
                           printf("\n\nChoice of computer is 1");
                           i=i-1;
                       }
                       else if(i==10)
                       {
                           printf("\n\nChoice of computer is 4");
                           i=i-4;
                       }
                       else if(i==9)
                       {
                           printf("\n\nChoice of computer is 3");
                           i=i-3;
                       }
                       else if(i==8)
                       {
                            printf("\n\nChoice of computer is 2");
                           i=i-2;
                       }
                       else if(i==7)
                       {
                            printf("\n\nChoice of computer is 1");
                           i=i-1;
                       }
                       else if(i==6)
                       {
                           printf("\n\nChoice of computer is 1");
                           i=i-1;
                       }
                       else if(i==5)
                       {
                            printf("\n\nChoice of computer is 4");
                           i=i-4;
                       }
                       else if(i==4)
                       {
                            printf("\n\nChoice of computer is 3");
                           i=i-3;
                       }
                       else if(i==3)
                       {
                            printf("\n\nChoice of computer is 2");
                           i=i-2;
                       }
                       else if(i==2)
                       {
                            printf("\n\nChoice of computer is 1");
                           i=i-1;
                       }

                    }

          printf("\n\nRemaining matchsticks = %d",i);
          if(i==0)
          {
              printf("\n\n*****YOU LOOSE THE MATCH******");
          }
       }

}
