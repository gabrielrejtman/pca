# include <stdio.h>
int main(){
	float nota, maior = 0, menor = 0, i = 0, cont = 0, soma = 0, media = 0;
	printf("Digite a media final do aluno:");
	scanf("%f", &nota);
	
	while(nota >= 0){
		cont++;
		soma += nota;
		
		if(nota > maior){
			maior = nota;
		}
		if(nota < menor){
			menor = nota;
		}
		if(cont == 1){
			menor = nota;
		}
		printf("Digite a media final do aluno:");
		scanf("%f", &nota);
	}
	media = soma/cont;
	printf("Maior nota: %.2f, Menor nota: %.2f, Media: %.2f", maior, menor, media);
	return 0;
}
