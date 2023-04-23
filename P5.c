#include<stdio.h>

int main()
{
    char a;
    char name[20];
    scanf("%c",&a);
    scanf("%s",name);
    printf("%c\n",a);
    printf("%s\n",name);

}

// %c (normal char), Give or store value NOT address !!
// %s (arrey char ), Will move from starting to end and will print the value stored !!
