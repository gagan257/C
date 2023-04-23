#include<stdio.h>

int odd(int n)
{
    if(n==1)
    {
        return 1;
    }
    if(n%2!=0)
    {
        return n+odd(n-2);
    }
    else
    {
        return n-1;
    }
}
int main()
{
    int n,d;

    printf("Give any number: ");
    scanf("%d",&n);

    d=odd(n);
    printf("Final answer: %d",d);
}