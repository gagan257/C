#include<stdio.h>

int series(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n+series(n-1);
}
int main()
{
    int n,s;

    printf("Give any number: ");
    scanf("%d",&n);

    s=series(n);
    printf("Final answer: %d",s);
}