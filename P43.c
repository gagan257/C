#include<stdio.h>

int main()
{
    int a,b,c;
    b = 1;
    c = 0;
    
    printf("Give any number : ");
    scanf("%d",&a);
    
    for( ; a>=b ; b = b + 1)
    {
        if (a%b==0)
        {
            c = c + 1;
        }
    }
    if (c==2)
    {
        printf("The Given Number is a Prime Number!\n");
    }
    else
    {
        printf("The Given Number is not a Prime Number!\n");
    }
    return 0;
}

// It will tell that the Given number is a prime number or not !!!