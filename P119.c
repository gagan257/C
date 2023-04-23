#include<stdio.h>
int main()
{
    int array[100][100],maxRow1,maxColumn1;
    printf("Enter max value of rows: ");
    scanf("%d",&maxRow1);
    printf("Enter max value of columns: ");
    scanf("%d",&maxColumn1);
    for(int a=0;a<maxRow1;a++)
    {
        for(int b=0;b<maxColumn1;b++)
        {
            printf("Enter the value of array[%d][%d]: ",a,b);
            scanf("%d",&array[a][b]);
        }
    }
    /*for(int a=0;a<maxRow1;a++)
    {
        for(int b=0;b<maxColumn1;b++)
        {
            printf("Array[%d][%d]: %d\n",a,b,array[a][b]);
        }
    }*/
    //SORTING 2D ARRAY(INCREASING ORDER)!!!
}