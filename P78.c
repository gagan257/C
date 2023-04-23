#include<stdio.h>

int Alphanumeric(int a)
{
    int b,c;
    while(a<0)
    {
        b = a%10;
        c = b;
        a = a/10;
        
        if(c<10)
        {
            printf("Thr given number is an Alphanumeric number!\n");
            break;
        }
    }
}
int main()
{
    int a;

    printf("Give any number : ");
    scanf("%d",&a);

    Alphanumeric(a);

}
