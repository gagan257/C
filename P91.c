/* 1! + 2! + .... + n! = sum*/
#include<stdio.h>

int main()
{
    int N,a,sum,b,c,d;
    a=1;
    sum=0;
    b=1;
    c=1;
    d=1;


    printf("Enter the last number of the series: ");
    scanf("%d",&N);


    while(a<=N)
    {
        while(b<=a)
        {
            c = c*b;
            b = b+1;
        }
        sum = sum + c;
        a=a+1;
        b=1;
        c=1;
    }
    while(d<N)
    {
        printf("%d! + ",d);
        d = d +1;
    }
    printf("%d! = %d",N,sum);
    return 0;

}