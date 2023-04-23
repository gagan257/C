#include<stdio.h>

int main()
{
    int a,b,c,d;

    a = 1;
    b = 100;
    c = 0;
    d = 1;

    while(a<=b)
    {
        while(a>=d)
        {
            if(a%d==0)
            {
                c = c + 1;
            }
            d = d + 1;
        }
        if(c==2)
            {
                printf("%d\n",a);
            }
        a = a + 1;
        d = 1;
        c = 0;
    }
    return 0;
}

// It will print all PRIME numbers between 1 to 100 !!!