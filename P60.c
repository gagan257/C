#include<stdio.h>

int main()
{
    int a,b,x,y;
    a = 1;
    b = 1;

    printf("Give 1st number : ");
    scanf("%d",&x);
    printf("Give 2nd number : ");
    scanf("%d",&y);

    while(a<=y)
    {   
        b = b*x;
        a = a + 1;
    }
    printf("1st no. power 2nd no. = %d\n",b);
    return 0;
}

/* Give two numbers. it will put 2nd as power of 1st number !!!