#include <stdio.h>

int main() {
  int i;
  int v[8];
  int *pV = v;
  printf("Digite 8 valores inteiros:\n");
  for (i = 0; i < 8; i++) {
    scanf("%d", pV + i);
    if(*(pV+i) % 2 == 0){
    	printf("%d eh par!\n",*(pV+i) );
	} 
  }

  printf("\nO dobro dos valores do array eh:\n");
  for (i = 0; i < 8; i++) {
    printf("%i ", *(pV + i) * 2);
  }
  printf("\n");

  return 0;
}

