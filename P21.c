#include<stdio.h>

int main()
{
    int a,b,d;
    d = 1;

    scanf("%d%d",&a,&b);

    for (int c=1 ; a>=c ; c = c+1)
    {
        d = 1;
        for ( ; b>=d ; d = d+1)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// Give 2 no. it will print '*' and will make a rectangle !!!
// It is based on "For" loop !
// See "P15.c" - "While" loop !