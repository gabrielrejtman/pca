// Faça um programa que leia dois valores inteiros x e y entre 0 e 1000. Encontre o maior entre eles e imprima:
// O módulo da diferença entre o maior e o menor
// O programa deve utilizar três funções:
// a) scanIntIntervalo: Função para ler inteiros do teclado garantido que eles estejam dentro de um intervalo pré-determinado;
// b) percentual: Função para calcular o percentual:  100*valor/total
// c) absdif: Função que retorna o valor absoluto da diferença entre dois números reais.
# include <stdio.h>
# include <stdlib.h>
int ScanIntIntervalo(){
	int num;
	printf("Insira um valor entre 0 e 1000: ");
	scanf("%d", &num);
	while(num < 0 || num > 1000 ){
		printf("Valor invalido, insira um inteiro entre 0 e 1000: ");
		scanf("%d", &num);
	}
	return num;
}

float Percentual(int a, int b){
	float calculo_porcentagem;
	if(a > b){
		calculo_porcentagem = (b * 100)/a;
	}
	else{
		calculo_porcentagem = (a * 100)/b;
	}
	return calculo_porcentagem;
	
}

float absdif(float a, float b){
	float abs;
	if(a > b){
		abs = a - b;
	}
	else{
		abs = b - a;
	}
	return abs;
	
}
int main(){
	int scan1 = ScanIntIntervalo();
	int scan2 = ScanIntIntervalo();
	printf("\nO percentual do menor em relacao ao maior equivale a %.2f\n", Percentual(scan1, scan2));
	printf("O modulo da diferenca entre o maior e o menor equivale a %.2f", absdif(scan1, scan2));
	return 0;
}
