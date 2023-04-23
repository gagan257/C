#include<stdio.h>

int main()
{
    int a,b;

    printf("Give Two Numbers : ");
    scanf("%d%d",&a,&b);

    if (a>b)
    {
        printf("The bigger number is %d\n",a);
    }
    if (b>a)
    {
        printf("The bigger number is %d\n",b);
    }
    if (a==b)
    {
        printf("Both numbers are equal!\n");
    }
    return 0;
}

// Give two no. It will tell the bigger no. !!!