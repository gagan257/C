#include<stdio.h>

int factorial(int n)
{
    int a,b,c,f;
    a=1;
    b=1;
    c=1;
    f=0;
    while(a<=n)
    {
        while(b<=a)
        {
            c = c*b;  
            b=b+1;
        }
        f=f+c;
        b=1;
        c=1;
        a=a+1;
    }
    printf("Final Answer: %d\n",f);
}
int main()
{
    int n;
    printf("Give the upper limit: ");
    scanf("%d",&n);

    factorial(n);
}