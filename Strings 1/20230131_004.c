#include <stdio.h>
#include <string.h>
#define max 100

void readString(void)   {
    char string[20];
    printf("Digite uma string: ");
    scanf("%s", string);

}

void lenString(void)    {
    char string[max];
    int len;
    printf("Digite uma string: ");
    scanf("%s", string);
    len = strlen(string);

    printf("O tamanho da string eh %d", len);

}

void compString(void)   {
    char string1[max], string2[max];
    int comp;
    printf("Digite duas strings: ");
    scanf("%s %s", string1, string2);

    comp = strcmp(string1, string2);
    if (comp == 0)  {
        printf("As duas strings sao iguais");
    }
    else    {
        printf("Sao strings diferentes");
    }
}

void concString(void)   {
    char string1[max], string2[max];
    char newString[max];
    printf("Digite duas strings: ");
    scanf("%s %s", string    int comp;1, string2);

    printf("%s", strcat(string1, string2));
}

int main()  {

    return 0;
}
