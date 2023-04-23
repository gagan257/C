#include<stdio.h>

int main()
{
    int st1,st2,st3,st4,st5,st6,st7,st8,st9,st10;
    int m11,m12,m13,m21,m22,m23,m31,m32,m33,m41,m42,m43,m51,m52,m53;
    int m61,m62,m63,m71,m72,m73,m81,m82,m83,m91,m92,m93,m101,m102,m103;
    int startroll = 1000;
    int endroll = 9999;
    int a,b,count,max,sub1,sub2,sub3; 

    count = 1;
    max = 0;

    
    
    while(count<=10)
    {
     printf("Enter roll number : ");
     scanf("%d",&a);
     
     while(a<1000 || a>9999)
     {
        printf("Invalid Roll number!\n Enter again : ");
        scanf("%d",&a);
     }
     printf("Enter marks of 3 subjects : ");
     scanf("%d%d%d",&sub1,&sub2,&sub3);
   
     b = sub1+sub2+sub3;

     if(b>=40)
     {
        printf("Total marks : %d\n",b);
     }
     else
     {
        printf("Marks is less than 40!\n");
     }
     if(b>=200)
     {
        max = max + 1;
     }
     count = count + 1;
    }
    printf("Students scored 200+ marks : %d\n",max); 

}

/* Enter student roll no. and marks of three Subjects.
   It will tell total marks.At the end it will also tell that
   how many students have scored more than 200 marks !!
   total students - 10 !!! */ 