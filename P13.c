#include<stdio.h>

int main()
{
    int a,b,sum;
    b = 1;
    sum = 1;
    scanf("%d",&a);

    while (a>=b)
    {
        sum = sum*b;

        b = b+1;
    }
    printf("%d\n",sum);
    return 0;
}

// Give one no. eg 5 it will give 5*4*3*2*1 = 120 !!!
// It is based on "While" loop !
// See "P20.c" - "For" loop !