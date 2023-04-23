#include<stdio.h>

int main()
{
    char a;

    printf("Give any alphabet : ");
    scanf("%c",&a);

    switch(a)
    {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
        printf("The Given Alphabet is a vowel!\n");
        break;
        default :
        printf("The Given Alphabet is NOT a vowel!\n");
    }
    return 0;
}

// Give any Letter. It will find it is a vowel or not !!!