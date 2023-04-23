#include<stdio.h>

int new(int N)
{
    int a;

    a=N+N+N;
    
    return a;
}
int main()
{
    int N,u;

    printf("Give one number :");
    scanf("%d",&N);

    u=new(N);

    printf("%d",u);

}
