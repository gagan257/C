#include<stdio.h>

int main()
{
    int a,b;

    printf("Give any Number : ");
    scanf("%d",&a);

    b = a%3;

    printf("Value of Remainder when divided by 3 is %d\n",b);

    return 0;
}

// Give any no. It will show the remainder after dividing the no. by 3 !!!