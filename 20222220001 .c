#include <stdio.h>
int main() 
{
    float num , soma = 0;  
    int i;

    for(i=0 ; i < 5; i++)
    {
     	printf("Informe um numero para soma:\n");
        scanf("%f", &num);  
        soma += num;
    }
        printf("O resultado da soma eh: %.2f", soma);
	return 0;
}
