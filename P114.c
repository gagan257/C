#include<stdio.h>
int main()
{
    int array[100],maxLimit;
    printf("Enter max value of array: ");
    scanf("%d",&maxLimit);
    
    for(int a=0;a<maxLimit;a++)
    {
        printf("Enter the value of array[%d]: ",a);
        scanf("%d",&array[a]);
    }
    int array2[maxLimit];
    for(int a=0;a<maxLimit;a++)
    {
        array2[a]=array[a];
    }
    
    // Increasing order
    for(int a=0;a<maxLimit-1;a++)
    {
        for(int b=a+1;b<maxLimit;b++)
        {
            if(array[a]>array[b])
            {
                int temp;
                temp=array[a];
                array[a]=array[b];
                array[b]=temp;
            }
        }
    }
    for(int a=0;a<maxLimit;a++)
    {
        printf("Value of array[%d]=%d\n",a,array[a]);
    }
    
    // Decreasing order
    for(int a=0;a<maxLimit-1;a++)
    {
        for(int b=a+1;b<maxLimit;b++)
        {
            if(array2[a]<array2[b])
            {
                int temp;
                temp=array2[a];
                array2[a]=array2[b];
                array2[b]=temp;
            }
        }
    }
    for(int a=0;a<maxLimit;a++)
    {
        printf("Value of array2[%d]=%d\n",a,array2[a]);
    }
}