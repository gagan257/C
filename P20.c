#include<stdio.h>

int main()
{
    int a,sum;
    sum = 1;

    scanf("%d",&a);

    for (int b=1 ; a>=b ; b = b+1)
    {
        sum = sum*b;
    }
    printf("%d\n",sum);
    return 0;
}

// Give one no. eg 5 it will give 5*4*3*2*1 = 120 !!!
// It is based on "For" loop !
// See "P13.c" - "While" loop !