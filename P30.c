#include<stdio.h>

int main()
{
    int a,b,c,d;

    printf("Enter Divident(main number) : ");
    scanf("%d",&a);

    printf("Enter Divisor(dividing number) : ");
    scanf("%d",&b);

    if(b>0)
    {
        c = a/b;
        printf("Quotient is %d\n",c);
    }
    else 
    {
        printf("Quotient is 0\n");
    }
    d = a%b;
    printf("Remainder is %d\n",d);
    return 0;
}

//    Divident = divisor x quotient + remainder !
// Eg. 15 = 4 x 3 + 3 !
// Give Divident and Divisor. It will give Quotient and Remainder!!!