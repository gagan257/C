#include<stdio.h>

int main()
{
    float a,b,c;

    printf("Give radius (in cm) : ");
    scanf("%f",&a);

    b = 22/7 * a*a;
    c = 2 * 22/7 * a;

    printf(" Area = %.2f cm sq.\n",b);
    printf(" Perimeter = %.2f cm sq.\n",c);

    return 0;
}

// Give radius of circle in "cm". It will give Area and Perimeter in "cm sq."