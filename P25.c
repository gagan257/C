#include<stdio.h>

int main()
{
    int a,b,c;
    c = 1;

    printf(" Give two numbers : ");
    scanf("%d%d",&a,&b);

    if (a>b)
    {
        printf(" %d - %d = %d\n",a,b,a-b);
    }
    else 
    {
        printf(" %d + %d = %d\n",a,b,a+b);
    }
    return 0;
}

// Give two no. if 1st > 2nd answer will be there subtraction.
// For other conditions answer will be addition !!!