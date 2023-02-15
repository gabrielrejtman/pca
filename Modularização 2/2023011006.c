#include <stdio.h>
#include <stdlib.h>

void converter(int n) {
 int r;
 int i;

 for(i = 31; i >= 0; i--) {

    r = n >> i;

    if(r & 1) {
        printf("1");
    } else {
        printf("0");
    }
 }

 printf("\n");

 system("pause");
}

int main()  {
    int n;
    printf("Digite um numero decimal: ");
    scanf("%d", &n);
    converter(n);

    return 0;
}
