// transforma a temperatura de Fahrenheit para Celsius e printa na tela

#include <stdio.h>
int main()
{
	float temp_f, temp_c;
	
	printf("Temperatura em Fahrenheit:\n");
	scanf("%f", &temp_f);
	
	temp_c = (5 * (temp_f - 32)/9);
	
	printf("%.1f graus Fahrenheit equivalem a %.1f graus Celsius", temp_f, temp_c);
	return 0;
	
}
