# include<stdio.h>

int fibonacci(int);

int main(){

int m, x;

printf("Insira a quantidade de valores da sequencia: \n");

scanf("%d",&m);

printf("A sequencia de fibonacci para esses numeros eh:\n");

for(x = 0;x < m; x++) {

printf("%d",fibonacci(x));

}

getch();
return 0;
}

int fibonacci(int x){

if(x == 0){
	return 0;
}

else if(x==1){
	return 1;	
}

else{
	return (fibonacci(x-1) + fibonacci(x-2));	
}}
