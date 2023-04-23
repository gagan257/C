#include<stdio.h>

int main()
{
    int n,u,a,sum;
    sum=0;
    printf("Give any number: ");
    scanf("%d",&n);

    /*while(n>0)
    {
        a=n%10;
        sum = sum + a;
        sum=sum*10;
        n=n/10;
    }
    sum=sum/10;*/
    sum=n;
    while(sum>1)
    {
        sum=sum/10;
        printf("%d\n",sum);
    }
    return 0;
}