#include <stdio.h>

int main(void){
    int num, qtd = 0, numAux = 0;
    scanf("%d", &num);
    numAux = num;

    while(numAux >= 10){
        numAux /= 10;
        qtd++;
    }
    qtd++;
    printf("%d", qtd);

    return 0;
}