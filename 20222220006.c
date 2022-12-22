#include <stdio.h>
int main()
{
	int numero, i;
	for(i = 1; i <= 9; ++i){
		for(numero = 0; numero <= 10; ++numero){
			int resultado = numero * i;
			printf("%d X %d = %d\n",i, numero, resultado);
		}
	}
	return 0;
}


