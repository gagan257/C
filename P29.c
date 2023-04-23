#include<stdio.h>

int main()
{
    int a;

    printf("Give a Number : ");
    scanf("%d",&a);

    if (a<0)
    {
        printf("The given number is negative!\n");
    }
    else 
    {
        printf("The given number is positive!\n");
    }
    return 0;
}

// Give one number. It will tell it is -ve or +ve !!!