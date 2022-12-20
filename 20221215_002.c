// média bimestral de quatro notas 
#include <stdio.h>
int main()

{
	float nota1, nota2, nota3, nota4, media;
	printf("Informe a primeira nota do bimestre:\n");
	scanf("%f", &nota1);
	
	printf("Informe a segunda nota do bimestre:\n");
	scanf("%f", &nota2);
	
	printf("Informe a terceira nota do bimestre:\n");
	scanf("%f", &nota3);
	
	printf("Informe a quarta nota do bimestre:\n");
	scanf("%f", &nota4);
	
	media = (nota1 + nota2+ nota3 + nota4)/4;
	
	printf("Sua media bimestral vale : %.2f", media);
	return 0;
}
