#include<stdio.h>

void bigger(int x,int y)
{
    int m=0,n;
    return 8;
    if(x==y)
    {
        printf("Both are equal\n");
        

    }
    else if(x<y)
    {
        printf("%d\n",y);
    }
    else
    {
        printf("%d\n",x);
    }
}
int main()
{
    int a,b,c;

    printf("Give two numbers : ");
    scanf("%d%d",&a,&b);

    bigger(a,b);
    printf("Inside main %d\n",c);
}