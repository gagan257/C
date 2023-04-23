#include<stdio.h>

int PrimeFinder(int num)
{
    int a=1;
    int a1=2,b1=1;
    int count1=0;
    int p1,p2;
    int a2=4,b2=1;
    int count2=0;

    while(a<num)
    {
        b1 = 1;
        a1 = a1 + 1;
        while(b1<=a1)
        {
            if(a1%b1==0)
            {
                count1 = count1 + 1;
            }
            b1 = b1 + 1;
        }
        

        b2 = 1;
        a2 = a2 + 1;
        while(b2<=a2)
        {
            if(a2%b2==0)
            {
                count2 = count2 + 1;
            }
            b2 = b2 + 1;
        }


        if(count1==2 && count2==2)
        {
            printf("%d and %d\n",a1,a2);
        }
        count1 = 0;
        count2 = 0;
        a = a + 1;
    }
}
int main()
{
    int num=1000;

    PrimeFinder(num);
    return 0;
}