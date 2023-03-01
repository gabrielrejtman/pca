#include <stdio.h>
#include <string.h>

void AcrescentaPonto(float notaAlunos[][6], char sexo[][6]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            if (sexo[i][j] == 'f') {
                notaAlunos[i][j]++;
            }
        }
    }
}

int main() {
    float notaAlunos[2][6] = {
        {4, 7.5, 6, 8, 10, 10},
        {9, 7, 5, 8.5, 6, 7.5}
    };

    char nomeAlunos[2][6][20] = {
        {"Roberto", "José", "Maria", "Augusta", "Jasmim", "Carla"},
        {"Julia", "Paula", "Gabriel", "Luis", "Joao", "Pedro"}
    };

    char sexo[2][6] = {'m', 'm', 'f', 'f', 'f', 'f',
                       'f', 'f', 'm', 'm', 'm', 'm'};

    int mulheresEquipe1 = 0;
    int mulheresEquipe2 = 0;
    for (int i = 0; i < 6; i++) {
        if (sexo[0][i] == 'f') {
            mulheresEquipe1++;
        }
        if (sexo[1][i] == 'f') {
            mulheresEquipe2++;
        }
    }

    if (mulheresEquipe1 > mulheresEquipe2) {
        printf("A equipe 1 tem mais mulheres.\n");
    } else if (mulheresEquipe2 > mulheresEquipe1) {
        printf("A equipe 2 tem mais mulheres.\n");
    } else {
        printf("As equipes têm a mesma quantidade de mulheres.\n");
    }

    AcrescentaPonto(notaAlunos, sexo);

    printf("Alunas que podem participar do projeto:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            if (notaAlunos[i][j] >= 8 && sexo[i][j] == 'f') {
                printf("%s\n", nomeAlunos[i][j]);
            }
        }
    }

    return 0;
}
