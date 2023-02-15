#include <stdio.h>
#include <string.h>
#define max 100

int main()  {
    char data[10], temp[4];
    int dia, mes, ano;

    printf("Digite a data: ");
    scanf("%s", data);

    if (data[2] == '/' && data[5] == '/')   {
        if(isdigit(data[0])==1 && isdigit(data[1])==1 && isdigit(data[3])==1 && isdigit(data[4])==1){
            if(isdigit(data[6])==1 && isdigit(data[7])==1 && isdigit(data[8])==1 && isdigit(data[9])==1){
                temp[0] = data[0]
                temp[1] = data[1]
                dia = atoi(temp);

                temp[0] = data[2];
                temp[1] = data[3];
                mes = atoi(temp);

                for(i=0, j=6; i<4; i++, j++){
                    temp[i] = data[j];
                }
                ano = atoi(temp);

                printf("%d/%d/%d", dia, mes, ano);
            }
        }
    }
    else    {
        printf("Data invalida!");
    }
}
