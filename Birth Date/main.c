#include <stdio.h>
#include <stdlib.h>

int main()
{
    int currentday=10;
    int currentmonth=10;
    int currentyear=2022;
    int year,month,day;

    do
    {
        printf("please enter your year\n");
        scanf("%i",&year);
        _flushall();
    }
    while(year > currentyear);
    do
    {
        printf("please enter your Month\n");
        scanf("%i",&month);
    }
    while(month>13||month<1);


    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        do
        {
            printf("please enter your Day\n");
            scanf("%i",&day);

        }
        while(day>31||day<1);
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        do
        {
            printf("please enter your Day\n");
            scanf("%i",&day);

        }
        while(day>30||day<1);
        break;

    default:
        if(year%4==0)
        {
            do
            {
                printf("please enter your Day\n");
                scanf("%i",&day);
            }
            while(day>29||day<1);
        }
        else
        {
            do
            {
                printf("please enter your Day\n");
                scanf("%i",&day);
            }
            while(day>28||day<1);
        }
        break;
    }
    int dayage=currentday-day;
    int monthage=currentmonth-month;
    int yearage=currentyear-year;
    if(monthage<0)
    {
        monthage+=12;
    }
    if(dayage<0)
    {
        dayage+=30;
        month-=1;
    }
    printf("\nyear %i",yearage);
    printf("\nMonth %i",monthage);
    printf("\nday %i",dayage);


    return 0;
}
