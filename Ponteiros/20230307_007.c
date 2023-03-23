#include <stdio.h>

void Func(int *vetor, int len, int **pMin, int **pMax){
    int i;
    for(i = 0; i < len; i++){
        if(vetor[i] < **pMin){
            *pMin = &vetor[i];
        }
        if(vetor[i] > **pMax){
            *pMax = &vetor[i];
        }
    }
}

int main(){
    int min = 10;
    int max = 20;
    int *pMin = &min;
    int *pMax = &max;
    int v[] = {10, 20, 30, 40, 50};
    int *pV = v;
    Func(pV, 5, &pMin, &pMax);
    printf("Valor minimo: %d\nValor maximo: %d\n", *pMin, *pMax);
    return 0;
}

