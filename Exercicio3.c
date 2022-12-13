#include <stdio.h>

int main(void)

{
float salario, reajuste;

printf("\n Informe seu salario(somente numeros): ");
scanf("%f", &salario);
	
reajuste = salario + (0.1 * salario);
printf("\n Apos o reajuste, seu salario sera de R$:%.2f", reajuste );
return 0;
	
}
