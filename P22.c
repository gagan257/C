#include<stdio.h>

int main()
{
    int a,b;
    printf("Temp. in °C : ");

    scanf("%d",&a);

    b = a * 9/5 + 32;

    printf("%d °F \n",b);
    return 0;
}

// Give temperature in °C. It will convert it to °F !!!