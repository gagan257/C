#include<stdio.h>

int main()
{
    int a;
    int x,y;
    printf("Give any number : ");
    scanf("%d",&a);

    if(a==1){
        printf("Yes it is fib\n");
    }
    else if(a==2){
        printf("Yes it is fib\n");
    }
    else{
        x=1;
        y=1;
        for(int b=3;;b++){
            int z = x+y;
            if(z==a){
                printf("It is a fib no.\n");
                break;
            }
            if(z>a){
                printf("It is not a fib no. \n");
                break;
            }
            x = y;
            y = z;
        }
        printf("\n");
    }

}