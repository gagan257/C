#include<stdio.h>

int main()
{
    int a,b;
    b = 1;

    scanf("%d",&a);

    while(b<=10)
    {
        printf("%d * %d = %d\n",a,b,a*b);

        b=b+1;
    }
    return 0;
}

// GIVE ONE NO. It will print table of that no. Till *10 !!!
// IT IS BASED ON "WHILE" LOOP !
// See "P17.c" . For loop based !!!
