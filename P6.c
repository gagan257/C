#include<stdio.h>

int main()
{
    int a,b;

    scanf("%d%d",&a,&b);

    if (a>b)
    {
        printf("%d is bigger\n",a);
    }
    if (a<b)
    {
        printf("%d is bigger\n",b);
    }
    if (a==b)
    { 
        printf("both are equal\n");
    }
    if (a%2==0)
    {
        printf("%d is even\n",a);
    }
    else
    {
        printf("%d is odd\n",a);
    } 
    
    return 0;

}

// '==' means equal !
// '%' means remainder when both no. are divided eg. 5%3 = 2 !!!