// converter metros para centímetros

#include <stdio.h>
int main()
{
	float metros, centimetros, scan;
	printf("Informe a medida em metros:\n");
	scanf("%f", &metros);	
	centimetros = metros * 100;
	printf("A medida de %.2f metros equivale a %.1f centimetros", metros, centimetros);
	return 0;

}
