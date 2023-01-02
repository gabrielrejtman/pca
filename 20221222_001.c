#include <stdio.h>
#import <math.h>

int main() {
	float x, x2, y;
	float modulo = 1.0;
	float e = 0.1;
	
	printf("Informe um valor para a obtencao da raiz quadrada:\n");
	scanf("%f", &y);
	
	// calculos de aproximação abaixo
	x = y/2 ;
	
	x2 = x - (pow(x, 2) - y) / (2 * x);
	
	modulo = fabs(x2 - x);

	while(modulo > e) {
	 
		x2 = x - (pow(x, 2) - y) / (2 * x);
		
		modulo = fabs(x2 - x);
		
		x = x2;
	}

	printf("A aproximacao pelo metodo de Newton-Raphson equivale a: %f\n", x2);
	printf("A raiz quadrada exata equivale a: %.2f", sqrt(y));
	return 0;
}	
