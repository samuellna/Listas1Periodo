#include <stdio.h>

int main(void){

    int num, soma = 0, digitos = 0, numA, numB, numComparacao = 0, fibonacci = 0;

    scanf("%d", &num);

    do{
        soma += num%10;
        num /= 10;
    }while(num != 0);
    
    numA = 0;
    numB = 1;

    while(numComparacao < soma){
        numComparacao = numA + numB;
        numA = numB;
        numB = numComparacao;
    }
    
    if(numComparacao == soma) printf("Sim");
    else printf("Nao");
    
    return 0;
}