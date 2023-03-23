# include <stdio.h>
int main(){
	int x = 10;
	int *pX = &x;
	float y = 1.5;
	float *pY = &y;
	char z = 'z';
	char *pZ = &z;
	printf("Antes de modificar:\n\nInteiro: %i \nReal: %f \nChar: %c \n\n", *pX, *pY, *pZ);
	
	*pX = 2;
	*pY = 5.5;
	*pZ = 'f';
	printf("Depois de modificar:\n\nInteiro:%i \nReal:%f \nChar:%c \n", *pX, *pY, *pZ);
	return 0;
}
