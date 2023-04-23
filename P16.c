#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    c = 1; 
    d = 1;
    e = 1;

    scanf("%d%d",&a,&b);

    while (a>=c)
    {
        for ( ; b>=d ; d = d + 1 )
        {
            printf("*");

        }
        d = 1000;
        
        c = c + 1;
    }
    return 0;
}