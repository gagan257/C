#include<stdio.h>

int main()
{
    int n,n1,m;
    scanf("%d",&n);
    n1=n;
    m=n;

    while(n1>=1)
    {
        while(m>=1)
        {
            printf("%d ",m);
            m = m - 1;
        }
        printf("\n");
        n1 = n1 - 1;
        m = n1;
    }
    return 0;
}