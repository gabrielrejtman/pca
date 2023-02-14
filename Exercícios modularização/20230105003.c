int ChecaPar(){
	int num;
	printf("Insira um numero inteiro par: ");
	scanf("%d", &num);
	while(num % 2 != 0){
		printf("\nInsira um valor valido: ");
		scanf("%d", &num);	
	}
	return num;
	
}

void ChecaPerfeito(int num){
	int num_perfeito = 0;
	int i;
	for(i = 0; i < num; i++){
		if(num % i == 0){
			num_perfeito += 1;
		}
	}
	if(num_perfeito == num){
		printf("%d eh um numero perfeito!", num);
	}
	else{
		printf("%d nao eh um numero perfeito!");
	}
}
int main(){
	int num = ChecaPar();
	ChecaPerfeito(num);
	return 0;
}
