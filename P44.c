#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,sum,avg;

    printf("Give 10 numbers : ");
    scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

    sum = a+b+c+d+e+f+g+h+i+j;
    printf("Total Sum of the Given Numbers : %d\n", sum);

    avg = sum/10;
    printf("The average of the Given Numbers : %d\n", avg);

    return 0;
}

// Give any 10 numbers it will give sum and avg of the given numbers!!!