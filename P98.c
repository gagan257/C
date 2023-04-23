#include<stdio.h>

int main()
{
    int n,u,a,b,m,x,count,n2,c;
    a=0;
    x=0;
    c=0;
    count=0;
    printf("Give any number: ");
    scanf("%d",&n);
    n2=n;
    while(n2>0)
    {
        n2=n2/10;
        count=count+1;
    }
    while(c<=count)
    {
        while(n>9)
        {
            u=n%10;
            a=a+u;
            a=a*10;
            n=n/10;
        }
        a=a/10;
        b=a;
        while(b>0)
        {
            m=b%10;
            x=x+m;
            x=x*10;
            b=b/10;
        }
        x=x/10;
        printf("Final answer: %d\n",x);
        c=c+1;
    }    
}