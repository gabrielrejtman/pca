// transforma temperatura de Celsius para Fahrenheit e imprime na tela

#include <stdio.h>
int main()
{
	float temp_c, temp_f;
	
	printf("Temperatura em Celsius:\n");
	scanf("%f", &temp_c);
	
	temp_f = ((temp_c * 1.8) + 32);
	
	printf("%.1f graus Celsius equivalem a %.1f graus Fahrenheit", temp_c, temp_f);
	return 0;
	
}
