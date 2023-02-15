#include <stdio.h>
#include <string.h>
#define max 100

int main()  {
    char carros[5][max];
    float consumo[5];
    int i, j;

    for (i = 0; i < 5; i++) {
        printf("Digite o nome do carro: ");
        gets(carros[i][max]);
        printf("Quilometro por litro: ");
        scanf("%f", &consumo);
    }

    return 0;
}
