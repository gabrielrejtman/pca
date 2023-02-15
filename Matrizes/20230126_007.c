#include <stdio.h>
#define max 100

int main()  {
    int m[max][max];
    int i, j, n, sam = 0;
    int itin[8];
    int pos1, pos2;

    printf("Digite a ordem da matriz: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Digite um numero: ");
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < 8; i++) {
        printf("Digite os numeros do itinerario: ");
        scanf("%d", &itin[i]);
    }

    for (i = 0; i < 7; i++) {
        pos1 = itin[i];
        pos2 = itin[i+1];
        sam += m[pos1][pos2];
    }

    printf("O valor do itinerario eh igual a %d", sam);

    return 0;
}
