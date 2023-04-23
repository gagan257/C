#include<stdio.h>

int main()
{
    int a,b,c,d;
    c = 0;

    printf("Give any number : ");
    scanf("%d",&a);
    d = a;
    while(a>0)
    {
        b = a%10;
        c = c*10 + b;
        a = a/10;
    }
    if(c==d)
        {
            printf("The Given number is a Palindrome number!\n");
        }
    if (d!=c)
    {
        printf("The Given number is NOT a Palindrome number!\n");
    }
    return 0;
}

/* Give any number. It will tell that the given number is 
a Palindrone number or not!
Eg. for Palindrone Number : 123321. Read it from both sides
    the number will remain same !!!  */