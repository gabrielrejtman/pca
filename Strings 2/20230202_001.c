#include <stdio.h>
#include <string.h>
#define max 100

int main()  {
    char teams[5][4][max], name[max];
    int i, j, comp, out;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            printf("Insira seu nome: ");
            gets(teams[i][j]);
        }
    }
    printf("Digite seu nome para encontrar sua equipe: ");
    gets(name);

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            comp = strcmp(name, teams[i][j]);
            if (comp == 0)  {
                out = i+1;
            }
        }
    }
    printf("Voce eh da equipe %d", out);

    return 0;
}
