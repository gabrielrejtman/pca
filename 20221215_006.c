// calcula o salário total baseado no salario por hora e horas trabalhadas

#include <stdio.h>
int main()
{
	float salario_hora, salario_total;
	int horas_trabalhadas;
	printf("Quanto voce ganha por hora?\n");
	scanf("%f", &salario_hora);
	
	printf("Quantas horas voce trabalhou no ultimo mes?\n");
	scanf("%d", &horas_trabalhadas);
	
	salario_total = salario_hora * horas_trabalhadas;
	
	printf("Nesse mes, seu salario foi de %.2f reais", salario_total);
	return 0;
	
}
