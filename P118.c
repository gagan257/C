#include<stdio.h>
int main()
{
    int array1[100][100],array2[100][100],maxRow1,maxColumn1,maxRow2,maxColumn2;
    printf("For array1\n");
    printf("maxRows for array1: ");
    scanf("%d",&maxRow1);
    printf("maxColumns for array1: ");
    scanf("%d",&maxColumn1);
    printf("For array2\n");
    printf("maxRows for array2: ");
    scanf("%d",&maxRow2);
    printf("maxColumns for array2: ");
    scanf("%d",&maxColumn2);
    for(int a=0;a<maxRow1;a++)
    {
        for(int b=0;b<maxColumn1;b++)
        {
            printf("value of array[%d][%d]: ",a,b);
            scanf("%d",&array1[a][b]);
        }
    }
    for(int a=0;a<maxRow2;a++)
    {
        for(int b=0;b<maxColumn2;b++)
        {
            printf("value of array[%d][%d]: ",a,b);
            scanf("%d",&array2[a][b]);
        }
    }
    int Column1=0,Column2=0;
    for(int row1=0;row1<maxRow1;row1++)
    {
        for(int row2=0;row2<maxRow2;row2++)
        {
            if()
            printf("%d\n",(array1[row1][Column1]+array2[row2][Column2]));
        }
        Column1=Column1+1;
        Column2=Column2+1;
    }
}