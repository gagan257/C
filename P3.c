#include<stdio.h>

int main()
{
    float a;
    float b;
    float c;

    scanf("%f%f",&a,&b);

    c = a+b;
    printf("Sum of %f and %f is %f\n",a,b,c);

    c = a-b;
    printf("Difference of %f and %f is %f\n",a,b,c);

    c = a*b;
    printf("Product of %f and %f is %f\n",a,b,c);

    c = a/b;
    printf("Division of %f and %f is %f\n",a,b,c);

    return 0;
}

//It will show +, -, x, / of 2 numbers entered !!! 