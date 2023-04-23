#include<stdio.h>

int isLeap(int year)
{
    if(year%4==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int year,a;

    printf("Give any year : ");
    scanf("%d",&year);

    a = isLeap(year);

    if(a==1)
    {
        printf("The Given year is a leap year!\n");
    }
    else
    {
        printf("The Given year is NOT a leap year!\n");
    }
    return 0;
}

/* Give any year. It will find that the given year is a leap year or not! */