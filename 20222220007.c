#include <stdio.h>
int main()
{
	int i;
	float media_maior, media_menor, media, menor_n1, menor_n2, menor_n3, maior_n1, maior_n2, maior_n3,maior, n1, n2, n3;
	int loop = 1;
	
	do{
		printf("\nNota do Exercicio %d:\n", i+1);
		scanf("%f %f %f", &n1, &n2, &n3);
			
		if(i == 0){
			maior_n1 = n1;
			menor_n1 = n1;
			maior_n2 = n2;
			menor_n2 = n2;
			maior_n3 = n3;
			menor_n3 = n3;
			
			printf("A maior nota do exercicio 1 vale %.2f\n",  maior_n1);
			printf("A menor nota do exercicio 1 vale %.2f\n", menor_n1);
			printf("A maior nota do exercicio 2 vale %.2f\n", maior_n2);
			printf("A menor nota do exercicio 2 vale %.2f\n", menor_n2);	
			printf("A maior nota do exercicio 3 vale %.2f\n", maior_n3);
			printf("A menor nota do exercicio 3 vale %.2f\n", menor_n3);
		}
		
		// Comparando se eh maior
		if(n1 > maior_n1){
			maior_n1=n1;
		}
		
		if(n2 > maior_n2){
			maior_n2=n2;
		}
		
		if(n1 > maior_n3){
			maior_n3 = n3;
		}
		
		if(n1 < menor_n1){
			menor_n1 = n1;
		}
		
		if(n2 < menor_n2){
			menor_n2 = n2;
		}
		
		if(n3 < menor_n3){
			menor_n3 = n3;
		}
		
		media = (n1+ n2+ n3)/3;
		
		if(media > media_maior){
			media_maior = media;
		}
		
		if(media < media_menor){
			media_menor = media;
		}

		printf("\nDeseja seguir para as notas de outro aluno?(1 para seguir e 0 para para)\n");
		scanf("%d", &loop);
	}while(loop == 1);
	printf("A maior media eh %.2f e a menor eh %.2f", media_maior, media_menor);
	return 0;
		
	
}
