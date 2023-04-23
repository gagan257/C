#include<stdio.h>

int main()
{
    int a,b,c,d,ch,digit;
    c = 0;
    ch = a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,y,x,y,z;
    digit = 1,2,3,4,5,6,7,8,9,0;

    printf("Give any number with digits : ");
    scanf("%d",&a);

    while(a>0)
    {

        d = a%10;
        if(d==digit)
        {
            c = c + 1;
        }
        a = a/10;
    }
    printf("%d",c);
}