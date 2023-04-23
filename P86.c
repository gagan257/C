#include<stdio.h>

int main()
{
    if(month1==1||month1==3||month1==5||month1==7||month1==8||month1==10||month1==12)
            {
                while(date1>0)
                {
                    while(date1>31)
                    {
                        printf("Date cannot be greater than 31 for the selected month. Enter Again :");
                        scanf("%d",&date1);
                        
                        if(date1<=31)
                        {
                            break;
                        }
                    }
                    while(date1<1)
                    {
                        printf("Date cannot be less than 1. Enter Again : ");
                        scanf("%d",&date1);
                        
                        if(date1>0)
                        {
                            break;
                        }
                    }
                    break;
                }
                break;        
            }
}