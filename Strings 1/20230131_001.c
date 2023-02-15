#include <stdio.h>
#include <string.h>
#define max 100

void invert_string(void)   {
    char word[max], inverted_word[max];
    int i, len;

    printf("Digite uma palavra: ");
    scanf("%s", word);
    len = strlen(word);

    for (i = 0; i < len; i++)    {
        inverted_word[i] = word[len -1 -i];
    }
    printf("Resultado: %s\n", inverted_word);
}

void remove_vogals(void)    {
    char string[max], new_string[max];
    int i, j, cont, len_1, len_2;
    char vogals[] = "aeiouAEIOU";

    printf("Digite uma palavra: ");
    scanf("%s", string);
    len_1 = strlen(string);
    len_2 = strlen(vogals);

    for (i = 0; i < len_1; i++) {
        cont = 0;
        for (j = 0; j < len_2; j++) {
            if (string[i] == vogals[j]) {
                cont++;
            }

        }
        if (cont == 0)  {
            printf("%c", string[i]);
        }
    }
    printf("\n");
}

void convertUppercase(void) {
    char string[max], new_string[max];
    int i, j, len1, len2;
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    char ALPHABET[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    printf("Digite uma palavra: ");
    scanf("%s", string);
    len1 = strlen(string);
    len2 = strlen(alphabet);

    for (i = 0; i < len1; i++)   {
        for (j = 0; j < len2; j++)  {
            if (string[i] == alphabet[j])   {
                new_string[i] = ALPHABET[j];
            }
        }
        printf("%c", new_string[i]);
    }
    printf("\n");
}

void cont(void) {
    char string[max], character;
    int i, j, len;
    int cont = 0;
    printf("Digite uma palavra e um caractere: ");
    scanf("%s %c", string, &character);

    len = strlen(string);

    for (i = 0; i < len; i++)   {
        if (character == string[i]) {
            cont++;
        }
    }
    printf("O caractere %c aparece na palavra %s %d vezes", character, string, cont);
    printf("\n");
}

void removeChar(void)   {
    char string[max], new_string[max], character;
    int i, j, len;
    int cont = 0;
    printf("Digite uma palavra e um caractere: ");
    scanf("%s %c", string, &character);

    len = strlen(string);

    for (i = 0; i < len; i++)   {
        if (character != string[i]) {
            new_string[cont] = string[i];
            cont++;
        }
    }
    printf("%s", new_string);
    printf("\n");
}

int main()  {
    invert_string();
    remove_vogals();
    convertUppercase();
    cont();
    removeChar();
    return 0;
}


