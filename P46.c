#include<stdio.h>

int main()
{
    int a,b,c,sum;
    sum = 0;
    b = 0;

    printf("Give any Number : ");
    scanf("%d",&a);
    c = a;

    while(a>0)
    {
        b = a%10;
        sum = sum + b*b*b;
        a = a/10;
    }
    if(sum==c)
    {
        printf("The Given Number is an Armstrong Number!\n");
    }
    else
    {
        printf("The Given Number is NOT an Armstrong Number!\n");
    }
    return 0;
}


//Give any no. It will tell the given no is an armstrong no. or not !!!
// Eg. 370 == 3*3*3 + 7*7*7 + 0*0*0 Hence it is an Armstrong Number !!!