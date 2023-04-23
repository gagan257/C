#include<stdio.h>
int main()
{
    int r,a,b,count,sum;
    a=0;
    b=1;
    count=0;
    sum=0;
    scanf("%d",&r);
    while(count<=r)
    {
        sum=a+b;
        a=b;
        b=sum;
        count=count+1;
    }
    printf("%d\n",sum);
}