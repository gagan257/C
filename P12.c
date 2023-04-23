#include<stdio.h>

int main()
{
    int a,b,sum;
    b=1;
    sum=0;

    scanf("%d",&a);

    while (a>=b)
    {
        sum=sum+b;

        b=b+1;
    }
    printf("%d\n",sum);
    return 0;
}

// Give one no. eg 5, output 1+2+3+4+5 = 15 !!!
// It is based on "While" loop !
// See "P19.c" - "for" loop !