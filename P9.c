#include<stdio.h>

int main()
{
    int a,b,c;

    scanf("%d",&a);

    b=1;
    c=0;

    while (a>=b)
    {
        if (a%b==0)
        {
           c=c+1; 
        }
        b=b+1;    
    }
    if (c==2)
    {
        printf("The Given number is a prime number\n");
    }
    else 
    {
        printf("The Given number is not a prime number\n");
    }
}

// Give any number. It will tell it is a prime no. or not !!!