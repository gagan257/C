#include<stdio.h>
int main()
{
    int array[5],a;
    for(a=0;a<5;a++)
    {
        printf("value of array[%d] :",a);
        scanf("%d",&array[a]);
    }
    for(a=0;a<5;a++)
    {
        printf("THE VALUE OF array[%d] is %d\n",a,array[a]);
    }
    return 0;
}