#include<stdio.h>
int sum(int *arr,int i)
{
    int sum=0;
    for(int a=0;a<i;a++)
    {
        sum=sum+arr[a];
    }
    printf("SUM address: ",arr);
    //printf("SUM: %d\n",sum);
}
int main()
{
    int arr[100],i,a=0;
    printf("Total Inputs: ");
    scanf("%d",&i);
    
    for(;a<i;a++)
    {
        printf("arr[%d]: ",a);
        scanf("%d",&arr[a]);
    }
    printf("MAIN ADDRESS: %p\n",arr);
    printf("%d\n",*arr+1);
    //sum(arr,i);

}