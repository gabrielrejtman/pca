#include <stdio.h>
int main()
{
	float salario_hora, salario_bruto, parte_inss, parte_ir, parte_sindicato, salario_liquido;
	int horas_trabalhadas;
	printf("Quanto voce ganha por hora?\n");
	scanf("%f", &salario_hora);
	
	printf("Quantas horas voce trabalhou no ultimo mes?\n");
	scanf("%d", &horas_trabalhadas);
	
	salario_bruto = salario_hora * horas_trabalhadas;
	parte_inss = 0.08 * salario_bruto;
	parte_ir = 0.11 * salario_bruto;
	parte_sindicato = 0.05 * salario_bruto;
	salario_liquido = salario_bruto - parte_inss - parte_ir - parte_sindicato;
	
	printf("Nesse mes, seu salario bruto foi de R$ %.2f\n", salario_bruto);
	printf("Voce pagou %.2f ao INSS\n", parte_inss);
	printf("Voce pagou %.2f ao Sindicato\n", parte_sindicato);
	printf("Voce pagou %.2f de Imposto de Renda\n", parte_ir);
	printf("Seu salario liquido foi de %.2f", salario_liquido);
	
	return 0;
	
}
