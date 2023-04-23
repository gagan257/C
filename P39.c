#include<stdio.h>

int main()
{
    int a,product,b;
    product = 1;

    printf("Give any number : ");
    scanf("%d",&a);

    while (a>0)
    {
        b = a%10;
        product = product*b;
        a = a/10; 
    }
    printf("The product of digits is %d\n",product);
    return 0;
}

// Give any no. It will tell the product of all digits present !!!