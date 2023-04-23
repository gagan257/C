#include<stdio.h>
int main()
{
    int arr[5];
    for(int a=0;a<5;a++)
    {
        printf("Enter the Value of array[%d]: ",a);
        scanf("%d",&arr[a]);
    }
    for(int a=0;a<5;a++)
    {
        if(arr[a]%2==0)
        {
            printf("array[%d] is even\n",a);
        }
        else
        {
            printf("array[%d] is odd\n",a);
        }
    }
}