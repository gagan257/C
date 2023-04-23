#include<stdio.h>

void gaganprintkarnewala()
{
    printf("Hello gagan\n");
}

void mysum(int x,int y){
    int c;
    c = x+y;
    printf("%d\n",c);
}

int mysum2(int x,int y){
    int c;
    c = x+y;
    return c;
}


int main(){
    int a,b,ans;
    scanf("%d%d",&a,&b);
    for(int i=0;i<10;i++){
        mysum2(a,b);
        //printf("%d\n",ans);
    }

    return 0;
}

// Class 16/11/20 !!