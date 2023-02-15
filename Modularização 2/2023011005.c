#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void converter(void) {
	int valorj, sobra, novoValor = 0;
	scanf("%i", &valor);

	for (j = 0; j < 6; j++) {
		sobra = valor - ((valor / 10)*10);
		valor = valor / 10;
		novoValor += sobra * pow(2,j);
	}
	printf("Decimal: %i \n", novoValor);

	return 0;
}

int main()  {
    converter();

    return 0;
}
