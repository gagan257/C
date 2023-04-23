#include<stdio.h>

int main()
{
    int a,b,c,d,e,f;
    c = 0;
    d = 1;
    a = 999;
    e = 9999;

    while(a<=e)
    {
        a = a + 1;
        f = a;
        d = 1;
        c = 0;
        while(d<=2)
        {
            b = a%10;
            c = c*10 + b;
            a = a/10;
            d = d + 1;
        }
        if(c==a)
        {
            a = f;
           printf("%d\n",a);
        }
        a = f;
    }
     
    return 0;
}

/* It will print all 4 digit Palindrome numbers !!! */