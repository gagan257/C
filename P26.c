#include<stdio.h>

int main()
{
    float a,b,c,d,e,sum,max,percentage;

    printf("Give marks of 5 subjects : ");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);

    printf("Total max. marks : ");
    scanf("%f",&max);

    sum = a+b+c+d+e;
    percentage = sum/max *100;

    printf("Final Percentage = %.2f\n",percentage);

    return 0;
}

// Give marks of 5 subjects with total max. marks.
// It will give Final Percentage !!!