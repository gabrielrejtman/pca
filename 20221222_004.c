#include <stdio.h>
int main(){
	int num, i, j = 0;
	printf("Insira um valor inteiro:\n");
	scanf("%d", &num);
	if(num <= 0){
		printf("Nao existem numeros primos nulos ou negativos.");
		return 0;
	}
	
	for(i = 2; i <= num / 2; i++){
		
		if(num % i == 0){
			j++;
			break;
				}
		}
		if(j == 0){
			printf("O numero %d eh primo", num);
		}
		else{
			printf("O numero %d nao eh primo", num);
		}
		

	return 0;
}
