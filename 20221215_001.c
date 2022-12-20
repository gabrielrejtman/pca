// soma de dois números flutuantes
#include <stdio.h>

int main()
{
	float num1, num2, soma;
	printf("Digite o numero 1:\n");
	scanf("%f", &num1);
	
	printf("Digite o numero 2:\n");
	scanf("%f", &num2);
	
	soma = num1 + num2;
	
	printf("O resultado da soma e %.2f", soma);
	return 0;
	
}
