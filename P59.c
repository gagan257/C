#include<stdio.h>

int main()
{
    int a,b,c,count;
    count = 0;

    printf("Give any number : ");
    scanf("%d",&a);
    printf("Give any Digit : ");
    scanf("%d",&b);

    while(a>0)
    {
        c = a%10;
        
        if(c==b)
        {
            count = count + 1;
        }
        a = a/10;
    }
    
    printf("%d\n",count);
    return 0;
}

/* Give a number and a digit. It will find that how many times 
   the given digit is used in the given number !!!