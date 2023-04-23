#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;
    scanf("%d%d",&a,&b);//& for adress always use & in scanf (not in alley)
    c = a*b;
    printf("Product of %d and %d = %d\n",a,b,c);
    printf("%p\n",&a);//this is use to print address. FOR ADDRESS %p !
    printf("%d\n",a);

    return 0;
}