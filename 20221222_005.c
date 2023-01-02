#include <stdio.h>
int main(){

int numerador, denominador = -1;
float result = 0;

for (denominador = 1; denominador <= 50; denominador++){
    numerador += 2;
    result += (numerador / denominador);
}

printf("O resultado da expressao eh %.0f", result);
return 0;
}
