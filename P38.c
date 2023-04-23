#include<stdio.h>

int main()
{
    int a,sum,b;
    sum = 0;

    printf("Give any number : ");
    scanf("%d",&a);

    for ( ; a>0 ; a = a/10)
    {
        b = a%10;
        sum = sum + b; 
    }
    printf("The addition of all digits = %d\n",sum);
    return 0;
}

// Give any number. It will add all the digits of that no. and will give the sum !!!