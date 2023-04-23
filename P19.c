#include<stdio.h>

int main()
{
    int a,sum;
    sum = 0;

    scanf("%d",&a);

    for (int b=1 ; a>=b ; b = b + 1)
    {
        sum = sum + b;
    }
    printf("%d\n",sum);
    return 0;
}

// Give one no. eg 5, output 1+2+3+4+5 = 15 !!!
// It is based on "For" loop !
// See "P12.c" - "While" loop !