#include<stdio.h>

float seriessum(float n)
{
    float a=2,sum=1+1/4,sum1=1+1/4;
    if(n<=2)
    {
     while (n<=2)
     {
      if(n==1)
       {
         printf("1\n");
         break;
       }
      if(n==2)
       {
         printf("1/4\n");
         break;
       }
       return 0;
      }
    }   
    else
    {
     for( ; a<=n ; a++)
     {
        sum = sum + sum1/2;
     }
     printf("%f\n",sum);
    } 
}
int main()
{
    float n;

    printf("Series : 1 + 1/4 + 1/8 + 1/16...\n");
    printf("Give the nth term : ");
    scanf("%f",&n);

    seriessum(n);
}