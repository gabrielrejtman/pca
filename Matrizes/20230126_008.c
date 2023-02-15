#include <stdio.h>
#define max 100

int main()  {
    int m1[max][max], m2[max][max], m3[max][max];
    int a1, a2, b1, b2;
    int i, j;
    int sum = 0;
    int lin = 0, col = 0;

    printf("Digite a ordem da matriz 1: ");
    scanf("%d %d", &a1, &a2);
    printf("Digite a ordem da matriz 2: ");
    scanf("%d %d", &b1, &b2);

    printf("Matriz 1: \n");

    for (i = 0; i < a1; i++)    {
        for (j = 0; j < a2; j++)    {
            printf("Digite um numero: ");
            scanf("%d", &m1[i][j]);
        }
    }

    printf("\nMatriz 2: \n");

    for (i = 0; i < b1; i++)    {
        for (j = 0; j < b2; j++)    {
            printf("Digite um numero: ");
            scanf("%d", &m2[i][j]);
        }
    }

    if (a2 == b1)   {
        for (i = 0; i < a1; i++)    {
            for (j = 0; j < b2; j++)    {
                sum += m1[lin][col]*m2[col][lin];
            }

        }
    }
    else    {
        printf("Erro!");
    }

    return 0;
}
