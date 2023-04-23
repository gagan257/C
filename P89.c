/*   Write a program to receive marks of physics, chemistry & maths from user & check its eligibility for course if
a)Marks of physics >= 40
b)Marks of chemistry >= 50
c)Marks of math’s >= 60
d)Total of physics & math’s marks >= 150 or
e)Total of three subjects marks >= 200   */

#include<stdio.h>

int main()
{
    float phy,chem,maths;
    
    printf("Give marks of the following (out of 100)\n");
    printf("Enter Marks of Physics: \n");
    scanf("%f",&phy);

    while(phy<0 || phy>100)
    {
        printf("Invalid! Enter again:\n");
        scanf("%f",&phy);
        
        if(phy>=0 && phy<=100)
        {
            break;
        }
    }
    
    printf("Enter Marks of Chemistry: \n");
    scanf("%f",&chem);
    
    while(chem<0 || chem>100)
    {
        printf("Invalid! Enter again:\n");
        scanf("%f",&chem);
        
        if(chem>=0 && chem<=100)
        {
            break;
        }
    }

   printf("Enter Marks of Maths: \n");
   scanf("%f",&maths);

   while(maths<0 || maths>100)
    {
        printf("Invalid! Enter again:\n");
        scanf("%f",&maths);
        
        if(maths>=0 && maths<=100)
        {
            break;
        }
    }
    if(phy>=40 && chem>=50 && maths>=60)
    {
        if(phy+maths>=150 || phy+chem+maths>= 200)
        {
            printf("Student is eligible!\n");
        }
        else
        {
            printf("Student is Not eligible!\n");
        }   
    }
    else
    {
        printf("Student is not eligible.!\n");
    } 
    return 0;
}