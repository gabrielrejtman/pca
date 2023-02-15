#include <stdio.h>
#include <string.h>
#define max 100

int main()  {
    char string[max], palindrome[max];
    int i, j, len, cont;
    int comp;

    printf("Digite uma string: ");
    scanf("%s", string);
    len = strlen(string);
    cont = len;

    for (i = 0; i < len ; i++)  {
        cont--;
        palindrome[i] = string[cont];
    }

    comp = strcmp(string, palindrome);
    if (comp == 0)  {
        printf("Eh palindromo!");
    }
    else    {
        printf("Nao eh palindromo :/");
    }

    return 0;
}
