# include <stdio.h>
int retornoOrdenado(int *x, int *y, int *z){
	int i, j;
	int retorno = 0;
	int temp = 0;
	if(*x == *y && *y == *z){
		retorno = 1;
	}
	int vetor[3] = {*x, *y, *z};
	int *pVetor = vetor;
	for(i = 0; i < 3; i++){
		for(j = i+1; j < 3; j++){
			if(vetor[i] > vetor[j]){
				temp = vetor[i];
				vetor[i] = vetor [j];
				vetor[j] = temp;
			}
		}
	}
	*x = vetor[0];
	*y = vetor[1];
	*z = vetor[2];
	return retorno;
}

int main(){
	int x, y, z;
	printf("Digite o valor de x: \n");
	scanf("%d", &x);
	printf("Digite o valor de y: \n");
	scanf("%d", &y);
	printf("Digite o valor de z: \n");
	scanf("%d", &z);
	int *pX = &x;
	int *pY = &y;
	int *pZ = &z;
	int output = retornoOrdenado(pX, pY, pZ);
	printf("\nValores em ordem:\n %d\n %d\n %d\n",x, y, z );
	if (output == 1){
		printf("\nTodos os valores sao iguais\n");
	}
	else{
		printf("\nOs valores nao sao todos iguais");
	}
	return 0;
}
