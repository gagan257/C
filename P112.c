#include<stdio.h>
int main()
{
    int arr[100],MaxLimit;
    printf("Enter max limit of array: ");
    scanf("%d",&MaxLimit);
    for(int a=0;a<MaxLimit;a++)
    {
        printf("Enter value of array[%d]: ",a);
        scanf("%d",&arr[a]);
    }
    printf("%p\n",*arr);
}