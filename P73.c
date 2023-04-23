#include<stdio.h>

int sumPdivisors(int num)
{
    for(int a=1 ; a<num ; a++)
    {
        if(num%a==0)
        {
            printf("%d\n",a);
        }
        
    }
}
int main()
{
    int num;

    printf("Give any number : ");
    scanf("%d",&num);

    sumPdivisors(num);
    return 0;
}

/* Give any number. It will give "proper divisors" of that number 
   BOOK :- Q 44 | Page - 126 */  
