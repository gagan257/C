#include<stdio.h>

int main()
{
    int a,b;
    a = 10;
    b = 1;

    while (a>=b)
    {
        printf("%d\n",b);

        b = b + 1;
    }
    return 0;
}

// It will print no. from 1 to 10 !!!