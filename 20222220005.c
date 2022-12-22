// programa que lê 20 números do usuário e informa o maior e o menor fornecido (proibido negativos)
#include <stdio.h>
int main()
{
	int numero, menor_num, maior_num = 0, i;
	
	for(i=1; i<=20; i++){
		
		printf("Digite um numero:\n");
		scanf("%d", &numero);
		
		if(numero < 0){
			printf("Informe um numero positivo");
			return 0;	
		}
		
		if(numero > maior_num){
			maior_num = numero;
		}
		
		if(numero < menor_num){
			menor_num = numero;
		}
		
		if(i == 1){
			menor_num = numero;
		}
		}
		printf("O maior valor fornecido vale: %d\n", maior_num);
		printf("O menor valor fornecido vale: %d", menor_num);

	return 0;
}
