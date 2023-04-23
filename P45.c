#include<stdio.h>

int main()
{
    int a,b;

    printf("Give any number : ");
    scanf("%d",&a);

    b = a%2;

    if (b==0)
    {
        printf("The Given number is Even!\n");
    }
    else 
    {
        printf("The Given number is Odd!\n");
    }
    return 0;

}

// Give any number. It will tell that the given no. is odd or even !!!