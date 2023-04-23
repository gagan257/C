#include<stdio.h>

int main()
{
    int a,b,c;
    c = 0;

    printf("Give any number : ");
    scanf("%d",&a);

    if (a==0)
    {
      c = 1;
    }

    while(a>0)
    {
        b = a%10;
        c = c + 1;
        a = a/10;
    }
    
    printf("Total number of digits : %d\n",c);
    return 0;
}

/* It Will count the total number of digits (Inc. 0) !!! */