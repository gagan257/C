#include<stdio.h>

int primecheck(int num)
{
    int a=1;
    int count=0;
    while(a<=num)
    {
        if(num%a==0)
        {
            count = count + 1;
        }
        a = a + 1;
    }
    if (count==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num,count;

    printf("Give any number\nIf prime '1' will come otherwise '0' : ");
    scanf("%d",&num);

    count = primecheck(num);
    printf("%d\n",count);
}

/* Give any number. It will tell that the given number 
   is prime or not by giving 1 or 0 as output !
   BOOK :- Q 48 | Page- 126 */ 