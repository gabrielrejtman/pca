# include <stdio.h>
float imprimeElementos(float *endereco1, float *endereco2){
while(endereco1 < endereco2){
    printf("%f\n", *endereco1);
    endereco1++;
}
}
int main(){
    float vetor1[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float vetor2[6] = {0.5, 1.0, 1.5, 2.0, 2.5, 3.0};
    float vetor3[6] = {0.1, 0.2, 0.3, 0.9, 2.2, 7.7};

    imprimeElementos(&vetor1[0], &vetor1[3]);
    imprimeElementos(&vetor2[1], &vetor2[4]);
    imprimeElementos(&vetor3[2], &vetor3[5]);
    return 0;
}
