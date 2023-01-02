// calcula se um número é perfeito (a soma de seus divisores positivos é igual ao numero)
#include <stdio.h>
int main(){
	int divisor, soma = 0;
	int num= 1;
	printf("Insira um numero:\n");
	scanf("%d", &num);
	
	for(divisor = 1; divisor < num; divisor++){
		if(num % divisor == 0){         // checa se é divisor, caso for, ocorre a soma
			soma += divisor;
		}
	}
	if(soma == num){
		printf("O numero %d eh perfeito", num);
	}
	else{
		printf("O numero %d nao eh perfeito", num);
	}
	return 0;
}
