#include <stdio.h>
#include <stdlib.h>

int* LerAlocar(){
    int tam, i;
    printf("O vetor tera quantos valores?: \n");
    scanf("%d", &tam);
    int *v = malloc(tam * sizeof(int));
    if(v != NULL){
    	printf("Digite %d valores: \n", tam);
        for(i = 0; i < tam; i++){
            scanf("%d", v+i);
        }
    }
    return v;
}

void maiorMenor(int *v, int tam, int *maior, int *menor){
    *maior = v[0];
    *menor = v[0];
    int i;
    for(i = 1; i < tam; i++){
        if (v[i] > *maior){
            *maior = v[i];
        }
        if(v[i] < *menor){
            *menor = v[i];
        }
    }
}

int main(){
    int *v = LerAlocar();
    int maior, menor;
    maiorMenor(v, 5, &maior, &menor);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    free(v);
    return 0;
}

