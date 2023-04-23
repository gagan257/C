#include<stdio.h>

int main()
{
    int n,a,c;
    a = 1;
    c = 0;

    printf("Give any number : ");
    scanf("%d",&n);

    while(a<=n)
    {
        c = c + a*a;
        a = a + 1;
    }
    printf("Total Sum : %d\n",c);
    return 0;
}

/* Give any number. It will print the sum of the squares 
   of that number from 1 !!!
   eg. 3 = 1*1 + 2*2 + 3*3 = 14 ! */ 