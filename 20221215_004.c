// ler o raio de um círculo e calcular sua área

#include <stdio.h>
#include <math.h>

int main()
{
	float raio, area;
	printf("Informe o raio do circulo:\n");
	scanf("%f", &raio);
	
	area = 3.14 * (pow(raio,2));
	
	printf("A area do circulo vale %.2f", area);
	return 0;
		
}
