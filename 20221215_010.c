// cálculo de peso

#include <stdio.h>
int main()
{
	float altura, imc;
	printf("Digite a altura da pessoa em metros:\n");
	scanf("%f", &altura);
	
	imc = ((72.7 * altura) - 58);
	
	printf("O peso ideal dessa pessoa e de: %.1f", imc);
	
}
