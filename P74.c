#include<stdio.h>

int sumPdivisors(int Ulim)
{
    int b=0;
    for(int a=1 ; a<Ulim ; a++)
    {
        if(Ulim%a==0)
        {
            b = b + a;
        }
    }
    if(b==Ulim)
        {
            printf("The Given number is perfect!\n");
        }
        else
        {
            printf("The Given number is NOT perfect!\n");
        }
}
int main()
{
    int Ulim;

    printf("Give any number : ");
    scanf("%d",&Ulim);

    sumPdivisors(Ulim);
    return 0;
}

/* Give any number. If will tell that it is "Perfect" or not!
   BOOK :- Q45 | Page- 126 */  