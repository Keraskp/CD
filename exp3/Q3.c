// WAP for a lexical analyzer for validating operators
#include <stdio.h>
void main()
{
    char s[5];

    printf("\n Enter any operator:");
    scanf("%s", s);
    switch (s[0])
    {
    case '>':
        if (s[1] == '=')
            printf("\n Greater than or equal");
        else
            printf("\n Greater than");
        break;
    case '<':
        if (s[1] == '=')
            printf("\n Less than or equal");
        else
            printf("\nLess than");
        break;
    case '=':
        if (s[1] == '=')
            printf("\nEqual to");
        else
            printf("\nAssignment");
        break;
    case '!':
        if (s[1] == '=')
            printf("\nNot Equal\n");
        else
            printf("\n Bit Not\n");
        break;
    case '&':
        if (s[1] == '&')
            printf("\nLogical AND");
        else
            printf("\n Bitwise AND");
        break;
    case '|':
        if (s[1] == '|')
            printf("\nLogical OR");
        else
            printf("\nBitwise OR");
        break;
    case '+':
        printf("\n Addition\n");
        break;
    case '-':
        printf("\nSubstraction\n");
        break;
    case '*':
        printf("\nMultiplication\n");
        break;
    case '/':
        printf("\nDivision\n");
        break;
    case '%':
        printf("Modulus\n");
        break;
    default:
        printf("\n Not a operator\n");
    }
}