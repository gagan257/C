#include<stdio.h>

int main()
{
    float Percentage;

    printf("Enter Percentage : ");
    scanf("%f",&Percentage);

    if (Percentage>=91)
    {
        printf(" Grade : A+\n");
    }
    else 
    {
        if (Percentage>=81)
        {
            printf(" Grade : A \n");
        }
        else 
        {
            if (Percentage>=71)
            {
                printf(" Grade : B+ \n");
            }
            else 
            {
                if (Percentage>=61)
                {
                    printf(" Grade : B \n");
                }
                else 
                {
                    if (Percentage>=51)
                    {
                        printf(" Grade : C+ \n");
                    }
                    else 
                    {
                        if (Percentage>=41)
                        {
                            printf(" Grade : C \n");
                        }
                        else
                        {
                            if (Percentage>=33)
                            {
                                printf(" Grade : D \n");
                            }
                            else
                            {
                                printf(" Fail ! \n");
                            }

                            
                        }
                        
                    }
                }
            }
        }
    }

    return 0;
}

// Give percentage. It will give Grade !!!
// Grades range :  G | Percentage   
//                A+ : 91 - 100
//                A  : 81 - 90
//                B+ : 71 - 80
//                B  : 61 - 70
//                C+ : 51 - 60
//                C  : 41 - 50
//                D  : 33 - 40
//               Fail: below 33


