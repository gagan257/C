#include<stdio.h>

int main()
{
    int a,b;

    a = 1;
    b = 80;

    while(a<=b)
    {
        printf("%d\t",a);
        if(a%8==0)
        {
            printf("\n");
        }
        a = a + 1;

    }
    return 0;
}

// It will print no. from 1 to 80 with space of 4 between and 8 numbers in a row !!!