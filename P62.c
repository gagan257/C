#include<stdio.h>

int main()
{
   int a;

   printf("Give any number : ");
   scanf("%d",&a);

   for(int b=1 ; b<=a ; b = b + 1 )
   {
      if(b%2==1)
      {
        for(int c=1 ; c<=a ; c = c + 1)
        {
           printf("* ");
        }
      }
      else
      {
         for(int c=1 ; c<=a ; c = c + 1)
        {
           printf(" *");
        }
      }
      printf("\n");
   }

}