# include <stdio.h>
# include <stdlib.h>
# include <math.h>
int mediaDesvio(double *vet, int tam, double *media, double *desvio){
	int i, j = 0, k = 0;
	for(i = 0; i < tam; i++){
		j += *(vet+i);	
	}
	*media = j/tam;
	for(i = 0; i < tam; i++){
		 k += pow((vet[i] - *media), 2);
	}
	*desvio = sqrt(k/tam);
}

int main(){
	int tam, i;
	double *vet, media, desvio;
	printf("Quantos alunos essa turma possui?\n");
	scanf("%d", &tam);
	vet = malloc(tam * sizeof(double));
	printf("\nInsira %d notas: ", tam);
	for(i = 0; i < tam; i++){
		scanf("%lf", (vet+i));
		vet[i] = *(vet+i);
	}
	mediaDesvio(vet, tam, &media, &desvio);
	printf("A media dessa turma eh:%.2f \nO desvio dessa turma eh: %.2f", media, desvio);
	return 0;
}

