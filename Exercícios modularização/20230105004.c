# include <stdio.h>
int fat(int n){
	int i;
	int fatorial = 1;
	for(i = 1; n >=1 ; n--){
		fatorial *= n;	
	}
	return fatorial;
}

int main(){
	int n, fatorial;
	printf("Insira um valor: ");
	scanf("%d", &n);
	
	fatorial = fat(n);
	printf("O fatorial de %d eh %d", n, fatorial);
	return 0;
}
