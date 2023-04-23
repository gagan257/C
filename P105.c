#include<stdio.h>
int main()
{
    int arr[5],a,sum=0;
    for(a=0;a<5;a++)
    {
        printf("Give value of array[%d] : ",a);
        scanf("%d",&arr[a]);
        sum=sum+arr[a];
    }
    printf("Final Answer: %d",sum);
    return 0;
}