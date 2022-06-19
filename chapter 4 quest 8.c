#include<stdio.h>
int main()
{
    int m,d;
    start:
    printf("Enter month of the Year - ");
    scanf("%d",&m);
     if(m<0||m>12)
       {
        printf("You entered invalid month ");
        goto start;
       }
    date:
    printf("Enter the date of month %d - ",m);
    scanf("%d",&d);
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
        if(d>31)
        {
            printf("Invalid date");
            goto date;
        }

    }
    else if(m==2)
    {
        if(d>29)
            {
            printf("Invalid date");
            goto date;
            }
    }
    else
    {
        if(d>30)
            {
                printf("Invalid date");
                goto date;
            }
    }
    if((m==12&&d>=22)||(m==1&&d<=19))
        printf("The person's zodiac sign is - Capricorn");
    else if((m==1&&d>=20)||(m==2&&d<=17))
        printf("The person's zodiac sign is - Aquarius");
    else if((m==2&&d>=18)||(m==3&&d<=19))
        printf("The person's zodiac sign is - Pisces ");
    else if((m==3&&d>=20)||(m==4&&d<=19))
        printf("The person's zodiac sign is - Aries");
    else if((m==4&&d>=20)||(m==5&&d<=20))
        printf("The person's zodiac sign is - Taurus");
    else if((m==5&&d>=21)||(m==6&&d<=20))
        printf("The person's zodiac sign is - Gemini");
    else if((m==6&&d>=21)||(m==7&&d<=22))
        printf("The person's zodiac sign is - Cancer");
    else if((m==7&&d>=23)||(m==8&&d<=22))
        printf("The person's zodiac sign is - Leo");
    else if((m==8&&d>=23)||(m==9&&d<=22))
        printf("The person's zodiac sign is - Virgo");
    else if((m==9&&d>=23)||(m==10&&d<=22))
        printf("The person's zodiac sign is - Libra");
    else if((m==10&&d>=23)||(m==11&&d<=21))
        printf("The person's zodiac sign is - Scorpio");
    else if((m==11&&d>=22)||(m==12&&d<=21))
        printf("The person's zodiac sign is - Sagittarius");
}
