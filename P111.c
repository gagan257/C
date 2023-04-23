#include<stdio.h>
int LargestFinder(int *arr,int maxlimit)
{
    int firstvalue=arr[0];
    for(int a=1;a<maxlimit;a++)
    {
        if(firstvalue<arr[a])
        {
            firstvalue=arr[a];
        }
    }
    return firstvalue;
}
int main()
{
    int arr[100],maxlimit,firstvalue,largest,LargestNumber;
    printf("Max Input: ");
    scanf("%d",&maxlimit);

    for(int a=0;a<maxlimit;a++)
    {
        printf("value of array[%d]: ",a);
        scanf("%d",&arr[a]);
    }
    LargestNumber=LargestFinder(arr,maxlimit);
    printf("ANSWER:%d\n",LargestNumber);
}