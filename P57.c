#include<stdio.h>

int main()
{
    int a,b,c;
    b = 1;
    c = 1;

    printf("Give any number : ");
    scanf("%d",&a);

    while(b<=a)
    {
        if (b%3==0)
        {
            c = b*b*b;
            printf("%d\n",c);
        }
        b = b + 1;
        c = 1;
    }
    return 0;
}

/* Give any number. It will print the cubes of the numbers
   between 1 to the given number, which are divisible by 3 !!! */ 