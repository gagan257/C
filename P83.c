#include<stdio.h>

int cmpdate(int d1,int d2,int m1,int m2,int y1,int y2 )
{
    if(y1>y2)
    {
        printf("The given date %d/%d/%d is Bigger!\n",d1,m1,y1);
    }
    if(y2>y1)
    {
        printf("The given date %d/%d/%d is Bigger!\n",d2,m2,y2);
    }
    else
    {
        if(m1>m2)
        {
            printf("The given date %d/%d/%d is Bigger!\n",d1,m1,y1);
        }
        if(m2>m1)
        {
            printf("The given date %d/%d/%d is Bigger!\n",d2,m2,y2);
        }
        else
        {
            if(d1>d2)
            {
                printf("The given date %d/%d/%d is Bigger!\n",d1,m1,y1);
            }
            if(d2>d1)
            {
                printf("The given date %d/%d/%d is Bigger!\n",d2,m2,y2);
            }
            if(d1==d2)
            {
                printf("Both given dates are SAME !\n");
            }
        }
    }
}
int main()
{
    int d1,d2,m1,m2,y1,y2;

    printf("Give information for 1st...\n");
    printf("Date : ");
    scanf("%d",&d1);
    printf("Month : ");
    scanf("%d",&m1);
    printf("Year : ");
    scanf("%d",&y1);
    printf("Give information for 2nd...\n");
    printf("Date : ");
    scanf("%d",&d2);
    printf("Month : ");
    scanf("%d",&m2);
    printf("Year : ");
    scanf("%d",&y2);
    
    cmpdate(d1,d2,m1,m2,y1,y2);
    return 0;
}

// Give two dates! It will tell which date is Bigger! 