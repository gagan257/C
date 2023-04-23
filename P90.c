/* Area = √ p(p − a)(p − b)(p − c), where p is half of the perimeter, or (a + b + c) / 2. Let a,b,c be the lengths of the sides of the given triangle.*/ 
#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,p,area;
    printf("Enter Sides :\n");
    scanf("%f%f%f",&a,&b,&c);

    p = (a+b+c)/2;

    area = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%f",area);
    
    return 0;
}