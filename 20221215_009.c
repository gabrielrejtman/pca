// pede 2 números inteiros e um real e imprime o produto do dobro do primeiro com metade do segundo, a soma do triplo do primeiro com o terceiro e terceiro ao cubo

#include <stdio.h>
#include <math.h>
int main()
{
	int num1, num2;
	float num3, operacao1, operacao2, operacao3;
	printf("Digite o primeiro numero:\n");
	scanf("%d", &num1);
	
	printf("Digite o segundo numero:\n");
	scanf("%d", &num2);
	
	printf("Digite o terceiro numero:\n");
	scanf("%f", &num3);
	
	operacao1 = ((num1 * 2) * (num2/2)); // caso a divisão ou multiplicação por um inteiro resulte em um numero real, somente a parte inteira será considerada
	operacao2 = ((num1 * 3) + num3);
	operacao3 = pow(num3, 3);
	
	printf("Produto do dobro do primeiro com metade do segundo =\n %.1f\n", operacao1);
	printf("Soma do triplo do primeiro com o terceiro =\n %.1f\n", operacao2);
	printf("Terceiro numero elevado ao cubo =\n %.1f", operacao3);
	
	return 0;
		
}
