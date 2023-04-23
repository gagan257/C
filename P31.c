#include<stdio.h>

int main()
{
    int a,b;

    printf("Give any Year = ");
    scanf("%d",&a);

    if (a%4==0)
    {
        printf("The given Year is a leap year !\n");
    }
    else 
    {
        printf("The given Year is not a leap year !\n");
    }
    return 0;
}

// Give any year. It will tell it is a leap year or not !!!