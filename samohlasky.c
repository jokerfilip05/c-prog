#include<stdio.h>

int main()
{
    char ch;
    printf("Zadejte znak :  ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("\n\n%c je samohláska.\n\n", ch);
            break;
        default:
            printf("%c neni samohlaska.\n\n", ch);
    }
    return 0;
}
