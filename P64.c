#include<stdio.h>
#include<math.h>

int main()
{
    double num,ans;

    printf("Give any number : ");
    scanf("%lf",&num);

    ans = sqrt(num);

    printf("Sq. root of the given number is %lf\n",ans);
    return 0;
}