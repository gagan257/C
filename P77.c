#include<stdio.h>

int Quotient(int num1,int num2)
{
    int a;
    if(num1>num2)
    {
        while(a<num2)
        {
            num1 = num1 - num2;

        }
    }
}
int Remainder()
{

}
int Product(int num1,int num2)
{
    int a = 1,sum = 0;
    while(a<=num2)
    {
        sum = num1 + num1;
        a = a + 1;
    }
    printf("Sum of both numbers : %d\n",sum);
}
int main()
{
    int num1,num2;

    printf("Give two numbers : ");
    scanf("%d%d",&num1,&num2);

    Product(num1,num2);
}