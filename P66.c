#include<stdio.h>

int mysum(int x,int y)
{
    int m;

    m = x+y;
    int n=0;
}
int main()
{
    int a,b,c;

    printf("Give two numbers : ");
    scanf("%d%d",&a,&b);

    c = mysum(a,b); 
    printf("%d\n",c);
}