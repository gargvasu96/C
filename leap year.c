#include<stdio.h>

void leapyear(int);

void main()
{
    int year;
    scanf("%d",&year);
    leapyear(year);
}

void leapyear(int year)
{
    if (year%100==0)
    {
        if (year%400==0)
            printf("LEAP YEAR");
        else
            printf("NON LEAP YEAR");
    }
    else
    {
        if(year%4==0)
            printf("LEAP YEAR");
        else
            printf("NON LEAP YEAR");
    }
}
