#include<stdio.h>

int cubesum(int num1)
{
    int b = 0;
    for(int a; num1>0; num1 = num1/10 )
    {
        a = num1%10;
        b = b + a*a*a;
    }
    return b;
}
int isArmstrong(int cube,int num)
{
    if(num==cube)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int printArmstrong(int isArm)
{ 
    if(isArm==1)
    {
        printf("The Given number is an Armstrong number!\n");
    }
    else
    {
        printf("The Given number is NOT an Armstrong number!\n");
    }
}
int main()
{
    int num,cube,isArm;

    printf("Give any number : ");
    scanf("%d",&num);

    cube = cubesum(num);
    printf("Cube and sum of each digit is %d\n",cube);

    isArm = isArmstrong(cube,num);

    printArmstrong(isArm);
    return 0;
}

/* Q41 | Page : 125 */  