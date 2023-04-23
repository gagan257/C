#include<stdio.h>
int main()
{
    int array[100],maxLimit, flag=0;
    printf("Enter max value: ");
    scanf("%d",&maxLimit);
    for(int a=0;a<maxLimit;a++)
    {
        printf("Value of array[%d]: ",a);
        scanf("%d",&array[a]);
    }
    for(int a=0;a<maxLimit-1;a++)
    {
        for(int b=a+1;b<maxLimit;b++)
        {
            if(array[a]==array[b])
            {
                printf("Given array is not distinct!\n");
                flag =1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
}