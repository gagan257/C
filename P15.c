#include<stdio.h>

int main()
{
    int a,b,c,d;
    c = 1;
    d = 1;

    scanf("%d%d",&a,&b);

    while (a>=c)
    {
        d=1;
        while(b>=d)
        {
            printf("*");
            d = d +1;
        }
        c = c + 1;
        printf("\n");

    }
   
    return 0;
}

// Give 2 no. it will print '*' and will make a rectangle !!!
// It is based on "While" loop !
// See "P21.c" - "For" loop !

// Give 2 no. it will print that no. of rows and c !!!