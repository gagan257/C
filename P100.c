#include<stdio.h>

int fseries(int n)
{
    int a,b,c,d,sum;
    a=0;
    b=1;
    sum=0;
    c=b;
    while(b<=n)
    {
        sum=sum+(a+b);
        b=b+a;
        c=b;
        a=c;
    }
    printf("Final Answer: %d\n",sum);
}
int main()
{
    int n;
    printf("Give number: ");
    scanf("%d",&n);

    fseries(n);
}