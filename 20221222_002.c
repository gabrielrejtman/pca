#include <stdio.h>
int main(){
	int i; 
	float maior_num, menor_num, num = 0;
		printf("Digite um numero:\n");
		scanf("%f", &num);
		menor_num = num;
	
	for(i = 0;i < 14; i++){
		printf("Digite um numero:\n");
		scanf("%f", &num);
		
		if(num < menor_num){
			menor_num = num;
		}
		if(num > maior_num){
			maior_num = num;
		}
	}
	
	printf("O maior valor informado foi %.2f e o menor foi de %.2f", maior_num, menor_num);
	return 0;	
}
