// recebe entrada de valores inteiros positivos e retorna a soma de seus impares e pares menores que 1000 (quando o input for >1000, fim do programa)

#include <stdio.h>
int main(){
	int num, soma_par, soma_impar = 0;

do{		
	printf("Informe um numero inteiro maior que 0:\n");
	scanf("%d", &num);
	
	if(num >= 1000){ // caso o valor inserido seja maior que 1000, termina o programa e informa a soma dos pares e impares menores que 1000
		printf("Programa finalizado. O valor inserido foi maior ou igual a 1000\n");
		printf("A soma de todos os pares eh igual a %d e a soma dos impares eh igual a %d", soma_par, soma_impar);
		return 0;
	}
	
	if(num % 2 == 0){ 
		soma_par += num;
	}
	else{
		soma_impar += num;
	}

	}while(num <= 1000);
	
	printf("A soma de todos os pares eh igual a %d e a soma dos impares eh igual a %d", soma_par, soma_impar);
	return 0;
}
