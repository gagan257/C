#include<stdio.h>
#include<math.h>

float perimeter(float side1,float side2,float side3)
{
    float p;
    p = side1+side2+side3;
    return p;
}
float herons(float s,float side1,float side2,float side3)
{
    float m;
    m = s*(s-side1)*(s-side2)*(s-side3);
    return m;
}
int main()
{
    float side1,side2,side3,a1,a2,a3;
    float p,sp,m;
    float s,area,areaf;
    printf("Give length of sides(in cm) : ");
    scanf("%f%f%f",&side1,&side2,&side3);
    printf("Give angles between the sides : ");
    scanf("%f%f%f",&a1,&a2,&a3);

    for(int total ; total=a1+a2+a3 ; )
    {
        if(total==180)
        {
            break;
        }
        else
        {
            printf("Invalid angles. Enter again : ");
            scanf("%f%f%f",&a1,&a2,&a3);
        }
    }
    s = perimeter(side1,side2,side3);
    area = herons(s/2,side1,side2,side3);

    areaf = sqrt(area);

    printf("area of triangle : %f cm sq.\n",areaf);
    printf("perimeter of triangle : %f cm\n",s);
    return 0;
}