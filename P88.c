#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,d,e;

    printf("Give 4 numbers : \n");
    scanf("%f%f%f%f",&a,&b,&c,&d);

    e=a+b+c+d;

    printf("Sum of the given numbers are: %f",e);
    return 0;
}