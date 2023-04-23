#include<stdio.h>

int main()
{
    int a,b;
    b = 1;

    scanf("%d",&a);

    for ( ; b<=10 ; b = b + 1)
    {
        printf("%d x %d = %d\n",a,b,a*b);
    }
    return 0;
}

// GIVE ONE NO. It will print table of that no. Till *10 !!!
// IT IS BASED ON "FOR" LOOP !
// See "P10.c" - While Loop !