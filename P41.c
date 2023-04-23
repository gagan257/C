#include<stdio.h>

int main()
{
    int n,sum,a;
    sum = 0;
    a = 1;
    printf("Will find the sum till the nth term \n");
    printf("series - 1 + 2 + 4 + 7 +...\n");
    printf("Give the nth term : ");
    scanf("%d",&n);

    while (a<=n)
    {
        sum = sum + a;
        a = a + 2;
    }
    printf("sum is %d\n",sum);
    return 0;
}

// Give nth term. It will find the sum of series till nth term !
// Series - 1 + 2 + 4 + 7 + 11... !!!