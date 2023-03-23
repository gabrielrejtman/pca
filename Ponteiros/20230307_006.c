# include <stdio.h>
int somaArrays(int *a, int *b, int *c, int lenA, int lenB){
	int i;
	if(lenA != lenB){
		return 0;
	}
	for(i = 0; i < lenA; i++){
		*(c+i) = *(a+i) + *(b+i);	
	}
	return 1;
}

int main(){
	int output, i;
	int a[] = {1, 2, 3};
	int b[] = {9, 9, 9};
	int c[3];
	output = somaArrays(a, b, c, 3, 3);
	if(output){
		printf("A soma do vetor A com o B eh:");
		for(i = 0; i < 3; i++){
			printf(" %d ", c[i]);
		}
		
	}
	else{
		printf("Os vetores nao possuem o mesmo tamanho");
	}
	return 0;
}
