#include<stdio.h>

int main()
{
    int a,count,b;
    count = 0;

    printf("Give any number : ");
    scanf("%d",&a);

    while(a>0)
    {
        a = a/10;
        count = count + 1;
    }
    printf("Total characters are %d\n",count);
    return 0;
}

// Give any no. It will give the total no. of digits !!!