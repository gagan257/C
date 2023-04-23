#include<stdio.h>

int Findjulian(int Day,int Month,int Year)
{
    int calculation;
    int Dividend;
    int Quotient;
    int b;
    int last2=0;
    int YC,MC,Q,Remainder;
    
    if(Year%4!=0)//Year code check for non leap year!
    {
        if(Year>=1600 && Year<=1699)
        {
            YC = 6;
        }
        if(Year>=1700 && Year<=1799)
        {
            YC = 4;
        }
        if(Year>=1800 && Year<=1899)
        {
            YC = 2;
        }
        if(Year>=1900 && Year<=1999)
        {
            YC = 0;
        }
        if(Year>=2000 && Year<=2099)
        {
            YC = 6;
        }
        if(Year>=2100 && Year<=2199)
        {
            YC = 4;
        }
        if(Year>=2200 && Year<=2299)
        {
            YC = 2;
        }
        if(Year>=2300 && Year<=2399)
        {
            YC = 0;
        }
        if(Month==1)
        {
            MC = 0;
        }
        if(Month==2)
        {
            MC = 3;
        }
        if(Month==3)
        {
            MC = 3;
        }
        if(Month==4)
        {
            MC = 6;
        }
        if(Month==5)
        {
            MC = 1;
        }
        if(Month==6)
        {
            MC = 4;
        }
        if(Month==7)
        {
            MC = 6;
        }
        if(Month==8)
        {
            MC = 2;
        }
        if(Month==9)
        {
            MC = 5;
        }
        if(Month==10)
        {
            MC = 0;
        }
        if(Month==11)
        {
            MC = 3;
        }
        if(Month==12)
        {
            MC = 5;
        }

    }
    else//Year code check for leap year!
    {
        if(Year>=1600 && Year<=1699)
        {
            YC = 6;
        }
        if(Year>=1700 && Year<=1799)
        {
            YC = 4;
        }
        if(Year>=1800 && Year<=1899)
        {
            YC = 2;
        }
        if(Year>=1900 && Year<=1999)
        {
            YC = 0;
        }
        if(Year>=2000 && Year<=2099)
        {
            YC = 6;
        }
        if(Year>=2100 && Year<=2199)
        {
            YC = 4;
        }
        if(Year>=2200 && Year<=2299)
        {
            YC = 2;
        }
        if(Year>=2300 && Year<=2399)
        {
            YC = 0;
        }
        if(Month==1)
        {
            MC = 6;
        }
        if(Month==2)
        {
            MC = 2;
        }
        if(Month==3)
        {
            MC = 3;
        }
        if(Month==4)
        {
            MC = 6;
        }
        if(Month==5)
        {
            MC = 1;
        }
        if(Month==6)
        {
            MC = 4;
        }
        if(Month==7)
        {
            MC = 6;
        }
        if(Month==8)
        {
            MC = 2;
        }
        if(Month==9)
        {
            MC = 5;
        }
        if(Month==10)
        {
            MC = 0;
        }
        if(Month==11)
        {
            MC = 3;
        }
        if(Month==12)
        {
            MC = 5;
        }
    }
    
    b = Year%10;
    last2 = last2 + b;
    Year = Year/10;
    b = Year%10;
    last2 = last2 + b*10;
    Q = last2 /4;

    Dividend = Day + last2 + Q + MC + YC ;
    Quotient = Dividend/7;
    calculation = Quotient*7;
    Remainder = Dividend - calculation;

    if(Remainder==0)
    {
        printf("SUNDAY\n");
    }
    if(Remainder==1)
    {
        printf("MONDAY\n");
    }
    if(Remainder==2)
    {
        printf("TUESDAY\n");
    }
    if(Remainder==3)
    {
        printf("WEDNESDAY\n");
    }
    if(Remainder==4)
    {
        printf("THURSDAY\n");
    }
    if(Remainder==5)
    {
        printf("FRIDAY\n");
    }
    if(Remainder==6)
    {
        printf("SATURDAY\n");
    }
}
int main()
{
    int Date,Month,Year;

    printf("Use YEAR between 1600 to 2300 ! \n");
    printf("Give...\n");
    printf("Date : ");
    scanf("%d",&Date);
    printf("Month : ");
    scanf("%d",&Month);
    printf("Year : ");
    scanf("%d",&Year);

    if(Year<1600 && Year>2300)
    {
        while(Year<1600)
        {
            printf("Year should be between 1600 to 2300. Enter Again\n Year :");
            scanf("%d",&Year);
            break;
        }
        while(Year>2300)
        {
            printf("Year should be between 1600 to 2300. Enter Again\n Year :");
            scanf("%d",&Year);
            break;
        }
    }
    else
    {
        Findjulian(Date,Month,Year);
    }    
    return 0;
}

/*  2. Make Month and Date checker ! */