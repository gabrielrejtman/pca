#include <stdio.h>
#define max 100

int main()  {
    int matrix[5][5] = {{3,4,5,6,7}, {12,65,78,6,8}, {54,5,6,7,8}, {2,3,4,5,67}, {21,23,4,5,6}};
    int i, j, soma_l = 0, soma_c = 0;

    printf("Diagonal principal: ");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == j) {
                printf("%d ", matrix[i][j]);
            }
        }
    }

    printf("\n");

    printf("Diagonal secundaria: ");

    for (i = 0; i < 5; i++) {
        for (j = 4; j >= 0 ; j--) {
            if (i + j == 4)  {
                printf("%d ", matrix[i][j]);
            }
        }
        dim += 2;
    }

    printf("\n");

    printf("Soma da linha 4: ");

    for (i = 0; i < 5; i++) {
        soma_l += matrix[3][i];
    }
    printf("%d", soma_l);
    printf("\n");

    printf("Soma da coluna 2: ");

    for (i = 0; i < 5; i++) {
        soma_c += matrix[i][1];
    }
    printf("%d ", soma_c);
    printf("\n");

    printf("Tudo, exceto a diagonal principal: ");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i != j) {
                printf("%d ", matrix[i][j]);
            }
        }
    }

    return 0;
}
