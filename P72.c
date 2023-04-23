#include<stdio.h>

int prodDigits(int num)
{
    int b = 1;
    for(int a ; num>0 ; num=num/10)
    {
        a = num%10;
        b = b*a;
    }
    printf("Product of Digits = %d\n",b);
}
int main()
{
    int num;

    printf("Give any number : ");
    scanf("%d",&num);

    prodDigits(num);
    return 0;
}

/* Give any number. It will give product of digits ! 
   Q 42 | page : 125 */ 