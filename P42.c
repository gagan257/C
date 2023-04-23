#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int sum=0;
    int cond=1;
    while(cond==1){
        while(num>0){
            sum = sum + num%10;
            num = num/10;
        }
        if(sum/10==0){
            cond=0;
        }
        num=sum;
        sum=0;
    }
    printf("%d\n",num);
    return 0;
}

// Give any no. It will keep on adding digits until sum comes in 1 digit !!!