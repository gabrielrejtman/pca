#include <stdio.h>
#include <stdlib.h>

#define NULL 0

int *encontra_valor(int *vet, int tam, int valor) {
    int *p;
    for (p = vet; p < vet + tam; p++) {
        if (*p == valor) {
            return p;
        }
    }
    return NULL;
}

int main() {
    int vetor[10] = {1, 2, 3, 2, 4, 2, 5, 6, 7, 2};
    int *p;
    printf("Enderecos das ocorrencias do valor 2:\n");
    while ((p = encontra_valor(vetor, 10, 2)) != NULL) {
        printf("%p\n", p);
        vetor = p + 1;
    }
    return 0;
}

