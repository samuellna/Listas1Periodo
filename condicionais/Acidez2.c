#include <stdio.h>
int main(){

    float valor;
    scanf("%f", &valor);

    printf("Digite o pH da solucao:\n");
    if(valor < 0 || valor > 14) printf("Valor do pH deve estar entre 0 e 14");
    else if(valor > 7) printf("Solucao Basica\n");
    else if(valor < 7) printf("Solucao Acida\n");
    else printf("Neutra\n");


    return 0;
}