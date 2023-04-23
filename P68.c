#include<stdio.h>

int oddeven(int x)
{
    if(x%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b;

    printf("Give any number : ");
    scanf("%d",&a);

    b = oddeven(a);
    if(b==1)
    {
        printf("The given number is Even !\n");
    }
    else
    {
        printf("The given number is Odd!\n");
    }
    return 0;
}