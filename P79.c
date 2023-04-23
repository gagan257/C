#include<stdio.h>

char casecheck(char ch)
{
    if(ch>='A' && ch<='Z')
    {
        printf("Upper case present!\n");
    }
    else
    {
        printf("Lower case present!\n");
    }
}
int main()
{
    char ch;

    printf("Give anyy character : ");
    scanf("%c",&ch);

    casecheck(ch);
}

// It will check that the given character is in upeer case or lower case //