#include<stdio.h>

void push(int *stack,int num, int *topPointer){
    *topPointer = *topPointer + 1;
    stack[*topPointer]=num;
    return;
}
void pop(int *topPointer)
{
    if((*topPointer)<0)
    {
        printf("No element found\n");
        return;
    }
    *topPointer = *topPointer - 1;
    printf("Element removed\n");    
    return;
}
int top(int *stack, int *topPointer)
{
    if((*topPointer)<0)
    {
        printf("No element found\n");
        return;
    }
    return stack[*topPointer]
}
int main()
{
    int num=0;
    int stack[100],topPointer=-1;
    while(num!=4)
    {
        printf("Options:\nEnter 1 to push an element\nEnter 2 to pop an element\n");
        printf("Enter 3 to print Top\nEnter 4 to Exit\n");
        scanf("%d",&num);
        if(num==1){
            push(stack, num, &topPointer);
        }
        if(num==2)    
        {
            pop(&topPointer);
        }
        if(num==3)
        {
            int currentTop = top(stack&topPointer);
            
        }
        if(num==4)
        {
            break;
        }
    }
}