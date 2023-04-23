#include<stdio.h>

int main()
{
    int a,b,c,d;
    c = 0;

    printf("Give any number : ");
    scanf("%d",&a);

    while(a>0)
    {
        b = a%10;
        c = c*10 + b;
        a = a/10;
    }
    d = 2*c;
    printf("Reverse of the Given Number : %d\n",c);
    printf("Double of the Reversed Number : %d\n",d);
    return 0;
}

/*Give any number it will first reverse the given number
  then it will double the reversed number !!! */