#include<stdio.h>

int main()
{
    int a;

    printf("Give a number : ");
    scanf("%d",&a);

    if (a%2 == 0)
    {
        printf("The given number is an even number!\n");
    }
    else 
    {
        printf("The given number is an odd number!\n");
    }
    return 0;
}

// Give one no. It will tell it is even or odd!!!