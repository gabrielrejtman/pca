#include <stdio.h>
int main()
{
	int i, num , soma_impares = 0;  

    for(i; i < 5; i++){
    	
    	printf("Informe um numero:\n");
        scanf("%d", &num); 
    	if(num % 2 != 0 && num >100 && num<200){
    	soma_impares += num;
		}
	}
	printf("A soma dos impares dos numeros informados eh:%d", soma_impares);
	return 0;
}
