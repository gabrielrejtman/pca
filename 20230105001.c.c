#include <stdio.h>
#include <math.h>
int scanIntIntervalo(){
	int valor1;
	printf("Insira o primeiro valor:\n");
	scanf("%d", &valor1);
	if(valor1<=1000 && valor1>=0){
		return valor1;
	}
	else{
		printf("Insira um valor válido");
		return 0;
	}
}

int absdif(int n1, int n2){
	return abs(n1 - n2);
}

int percentual(){
	int porcentagem;
	int valor1, valor2;
	if(valor1 > valor2){
		porcentagem = (100 * valor2)/valor1;
	}
	if(valor2 > valor1){
		porcentagem = (100*valor1)/valor2;
	}
}
int main() 
{
	int valor1, valor2;
	valor1 = scanIntIntervalo();
	valor2 = scanIntIntervalo();
	//printf("%d", valor1);
	printf("%d", absdif(valor1, valor2));
	//printf(percentual());
}
