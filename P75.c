#include<stdio.h>

int sumPdivisors1(int num1)
{
    int b=0;
    for (int a=1 ; a<num1 ; a++)
    {
        if(num1%a==0)
        {
            b = b + a;
        }    
    }
    return b;
}
int sumPdivisors2(int num2)
{
    int d=0;
    for (int c=1 ; c<num2 ; c++)
    {
        if(num2%c==0)
        {
            d = d + c;
        } 
    }
    return d;
}
int main()
{
    int num1,num2,total1,total2;

    printf("Give two numbers : ");
    scanf("%d%d",&num1,&num2);

    while(num1==num2)
    {
        printf("Both numbers should be different. Try again : ");
        scanf("%d%d",&num1,&num2);
    }

    total1 = sumPdivisors1(num1);
    total2 = sumPdivisors2(num2);

    if(total1==num2)
    {
        if(total2==num1)
        {
            printf("Given Numbers are Amicable numbers!\n");
        }    
    }
    else
    {
        printf("Given Numbers are NOT Amicable!\n");
    }
    return 0;
}

/* Give two different numbers. It will tell that both numbers are 
   "Amicable" or not ! 
   BOOK :- Q 46 | Page- 126 */ 