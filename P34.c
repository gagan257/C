#include<stdio.h>

int main()
{
    int a,b;
    b = 1;

    printf("Give a number : ");
    scanf("%d",&a);

    for ( ; a>=b ; a=a-2 )
    {
        printf("%d\n",a);

    }
    return 0;
}


// Give a no. it will print it backwards with difference of 2 !!!