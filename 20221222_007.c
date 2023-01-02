#include <stdio.h>
int main(){
	float massa_inicial;
	int tempo_estimado, hora, minuto, segundo;
	printf("Informe a massa do material:\n");
	scanf("%f", &massa_inicial);
	if(massa_inicial < 0.5){
		printf("A massa do material ja eh menor que 0.5");
		return 0;
	}
	
	while(massa_inicial >= 0.5){
		massa_inicial -= massa_inicial/2;
		tempo_estimado += 50;
	}
	minuto = (tempo_estimado % 3600) / 60;
	hora = tempo_estimado/3600;
	segundo = (tempo_estimado % 3600) % 60;
	
	printf("O tempo necessario ate a massa do material ficar abaixo de 0.5 gramas eh de %d horas, %d minutos e %d segundos.", hora, minuto, segundo);
	return 0;
}

