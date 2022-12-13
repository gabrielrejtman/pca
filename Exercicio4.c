#include <stdio.h>

int main()
{
float conta_restaurante, porcentagem_garcom;
printf("\n Valor da conta do restaurante(somente numeros):");
scanf("%f",&conta_restaurante);

porcentagem_garcom = conta_restaurante * 0.1;//a taxa de serviço, no Brasil, equivale a 10% do valor de consumo.

printf("\n A taxa que o garcom recebera por essa conta sera de %.2f", porcentagem_garcom);
return 0;

}	 
