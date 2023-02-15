#include <stdio.h>

int contadigitos(int n, int d) {

  int conta, resto;

  conta = 0;

  while (n != 0) {
    resto = n % 10;
    n = n/10;
    if (resto == d)
      conta++;
  }

  return conta;
}

void perm(int n, int m)    {
    int a, b, d;
    int perm;

  printf("Digite dois inteiros: ");
  scanf("%d %d",&a,&b);
  perm = 1;

  for (d = 1; d <= 9; d++)
    if (contadigitos(a,d) != contadigitos(b,d))
      perm = 0;

  if (perm == 1)
    printf("%d eh permutacao de %d\n",a,b);
  else
    printf("%d nao eh permutacao de %d\n",a,b);
}

int main() {
  int a, b, d;
  int perm;

  printf("Digite dois inteiros: ");
  scanf("%d %d",&a,&b);
  perm = 1;

  for (d = 1; d <= 9; d++)
    if (contadigitos(a,d) != contadigitos(b,d))
      perm = 0;

  if (perm == 1)
    printf("%d eh permutacao de %d\n",a,b);
  else
    printf("%d nao eh permutacao de %d\n",a,b);

  return 0;
}
