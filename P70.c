#include<stdio.h>

int table(int num)
{
    int b = 1;
    int c;
    while(b<=10)
    {
        c = num*b;
        printf("%d\n",c);
        b = b + 1;
    }
}
int main()
{
    int num;

    printf("Give any number : ");
    scanf("%d",&num);
    
    table(num);
    return 0; 
}

/* It will print table till X10 !
   Based on Function ! */ 