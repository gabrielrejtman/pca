# include <stdio.h>
# include <stdlib.h>
# define TAMANHO 100

void coletarNumeros(int v[], int tamanho);
int main()
{
    int v[TAMANHO];
    int num;
    int i;
    printf ("Quantidade de numeros: ");
    scanf("%d",&num);
    for (i = 0; i < num; i++){
        printf("Digite o %d numero: ", i+1);
        scanf ("%d", &v[i]);
    }
    coletarNumeros(v, num);
    return 0;
}
void coletarNumeros(int v[], int tamanho){
    int i;
    for (i = tamanho - 1; i>=0; i--){
    	if(v[i] % 2 == 0){
        printf(" %d", v[i]);}
    }
}
