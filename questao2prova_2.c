# include <stdio.h>
# include <math.h>
int scan_int(){
	int n;
	do{
		printf("Digite um numero inteiro positivo:");
		scanf("%d", &n);
	}while (n < 0);
	return n;
}
int hiper_fatorial(int n){
	int i, hiper = 1;
	for(i = 0; i <= n; i++){
		hiper *= pow(i,i);
	}
	return hiper;
}
int main(){
	int n;
	n = scan_int();
	printf("\nO hiper fatorial eh:%d", hiper_fatorial(n));
	return 0;
}
