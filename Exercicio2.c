#include <stdio.h>

int main(void)

{
int idade;
char nome[50], sexo;

printf("\n Nome: ");

gets(nome);

printf("\n Sexo(H ou M): ");

scanf("%c",&sexo);

printf("\n Informe sua idade: ");

scanf("%d",&idade);

if (sexo == 'M'||sexo == 'm'){

printf("\n Mulher");
}

else if (sexo == 'H'||sexo == 'h'){

printf("\n Homem");
}

else{

printf("\n Sexo Invalido");
}
return 0;

}
