#include <stdio.h>

int main()  {
    int m[3][3], i, j;
    int l, c, x;
    int n, aux;

    for (i = 0; i <= 3; i++)    {
        for (j = 0; j <= 3; j++)    {
            printf("Digite um numero: ");
            scanf("%d", &m[i][j]);
        }
    }
    printf("Digite o numero para ser encontrado: ");
    scanf("%d", &x);

    for (i = 0; i <= 3; i++)    {
        for (j = 0; j <= 3; j++)    {
            if (m[i][j] == x)   {
                x = m[i][j];
                aux = m[i][j];
            }
        }
    }
    if (x == aux)   {
        printf("Numero encontrado: %d", x);
    }
    else    {
        printf("Numero nao encontrado!");
    }

    return 0;

}
