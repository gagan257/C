#include<stdio.h>
int main()
{
    int arr[8]={74,65,89,456,35,23,55,865},b,c;
    b=c=arr[0];
    for(int a=0;a<8;a++)
    {
        if(arr[a]<b)
        {
            b=arr[a];
        }
        if(arr[a]>b)
        {
            c=arr[a];
        }        
    }
    printf("SMALLEST NO. %d\n",b);
    printf("LARGEST NO. %d\n",c);
}