#include<stdio.h>

int main()
{
    int a,b;
    b=1;

    scanf("%d",&a);

    while (a>b*b)
    {
        b = b+1;
        
    }
    if (a==b*b)
    {
        printf(" The Given number is a perfect Square!\n");
    }
    else 
    {
        printf(" The Given number is not a perfect square!\n");
    }
    return 0;
}

// Enter any number, It will tell it is a perfect square or not !!!
