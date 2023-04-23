#include<stdio.h>

int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int n,f;

    printf("Give any number: ");
    scanf("%d",&n);

    f=factorial(n);
    printf("Final answer: %d",f);
}