// calcula a área de um quadrado e mostra seu dobro

#include <stdio.h>
int main()
{
	float lado, dobro_area;
	printf("Informe o lado do quadrado:\n");
	scanf("%f", &lado);
	
	dobro_area = (lado * lado) * 2;
	
	printf("O dobro da area do quadrado equivale a %.1f metros", dobro_area);
	return 0;
	
}
