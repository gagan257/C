#include<stdio.h>
int main()
{
    int arr[100],arraySize,smallestNumber,biggestNumber;
    printf("Give total no. of Iputs: ");
    scanf("%d",&arraySize);
    for(int i=0;i<arraySize;i++)
    {
        printf("Enter value no. %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    biggestNumber=arr[0];
    smallestNumber=arr[0];
    for(int i=1;i<arraySize;i++)
    {
        if(biggestNumber<arr[i])
        {
           biggestNumber=arr[i]; 
        }
        if(smallestNumber>arr[i])
        {
            smallestNumber=arr[i];
        }
    }
    printf("DIFFERENCE: %d\n",biggestNumber-smallestNumber);
}