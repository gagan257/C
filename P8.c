#include<stdio.h>

int main()
{
    int gagan=123;
    
    //scanf("%d",&gagan);

    for (int gagan=5 ;gagan>0;gagan=gagan-1)
    {
        printf("Gagan\n");
    }
    printf("%d\n",gagan);
    return 0;
}

// Inside "for" if we take any new int or any variable then it will only work..
// inside the "for" loop. Outside It will not work !!!
// For eg. run above program !