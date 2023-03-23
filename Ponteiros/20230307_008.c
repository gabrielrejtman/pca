void troca(float *a, float *b) {
    printf("Valores antes da troca: a = %f, b = %f\n", *a, *b);
    float temp = *a;  
    *a = *b;          
    *b = temp;       
    printf("Valores depois da troca: a = %f, b = %f\n", *a, *b);
}

int main(){
	float a = 1.5;
	float b = 2.5;
	troca(&a, &b);
}

