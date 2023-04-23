#include<stdio.h>
int main()
{
    int arr[5]={1,4,7,9,5};
    for(int i=0;i<5;i++)
    {
        printf("Value of arr[%d]: %d\t",i,arr[i]);
        printf("Address: %p\n",(arr+i));
    }
}