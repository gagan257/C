#include<stdio.h>

int main()
{
    int date1,date2,month1,month2,year1,year2,y1,y2;

    /* FOR 1st INFO */
    printf("Give the 1st...\n");
    printf("Year : ");
    scanf("%d",&year1);
    printf("Got It!\n");
    if(year1%4!=0)/*NON LEAP*/
    {
        y1=1;
    }
    else/*LEAP*/
    {
        y1=0;
    }
    printf("Month : ");
    scanf("%d",&month1);
    while(month1>0)
    {
        if(month1>12)
        {
            printf("Month cannot be greater than 12. Enter Again : ");
            scanf("%d",&month1);
        }
        else
        {
            break;
        }
    }
    while(month1<1)
    {
        printf("Month cannot be less than 1. Enter Again : ");
        scanf("%d",&month1);
        if(month1>=1)
        {
            printf("Got It!\n");
            break;
        }
    }
    printf("Date : ");
    scanf("%d",&date1);
    while(date1>0)
    {
        if(month1==1||month1==3||month1==5||month1==7||month1==8||month1==10||month1==12)
        {/* FOR 31 DAY MONTHS */
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
                break;
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

        if(month1==4||month1==6||month1==9||month1==11)
        {/* FOR 30 DAY MONTHS */
            while(date1>0)
            {
                while(date1>30)
                {
                    printf("Date cannot be greater than 30 for the selected month. Enter Again :");
                    scanf("%d",&date1);
                    
                    if(date1<=30)
                    {
                        break;
                    }
                }
                break;
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
        if(y1==1)/*NON LEAP*/
        {
            if(month1==2)
            {
                while(date1>0)
                {
                    while(date1>28)
                    {
                        printf("Date cannot be greater than 28 in the given month. Enter Again : ");
                        scanf("%d",&date1);

                        if(date1<29)
                        {
                            break;
                        }                        
                    }
                    break;
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
        if(y1==0)/*LEAP*/
        {
            if(month1==2)
            {
                while(date1>0)
                {
                    while(date1>29)
                    {
                        printf("Date cannot be greater than 29 in the given month. Enter Again : ");
                        scanf("%d",&date1);

                        if(date1<30)
                        {
                            break;
                        }
                    }
                    break;
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
    return 0;
}

/*Final touch !!! */