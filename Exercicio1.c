#include <stdio.h>

int main(void)
{
 float area, base, altura;

 printf("\n Base: ");
 scanf("%f",&base);
 printf("\n Altura: ");
 scanf("%f",&altura);

 area=(base*altura)/2;

 printf("\n Area do triangulo=%.2f\n",area);
 return 0;

}
