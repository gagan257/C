#include<stdio.h>
int line();
int main()
{
    line();
    return 0;
}
int line()
{
    for(int a=1 ; a<=10 ; a = a + 1)
    {
        printf("_");
    }
    printf("\n");
}