#include <stdio.h>
#include <math.h>

int main(void){
    
    int num, qtd = 0, numAux, potencia, primeiroDig, ultimoDig, dif;
    
    scanf("%d", &num);
    numAux = num;
    ultimoDig = num%10;
    
    while(numAux >= 10){
        numAux /= 10;
        qtd++;
    }
    qtd++;
    
    potencia = pow(10, qtd - 1);
    primeiroDig = num/potencia;
    dif = primeiroDig - ultimoDig;
    
    if(dif < 0) dif *= -1;
    
    if(ultimoDig > primeiroDig) num += dif * potencia;
    else if(ultimoDig < primeiroDig) num -= dif * potencia;
    
    if(primeiroDig > ultimoDig) num += dif;
    else if(primeiroDig < ultimoDig) num -= dif;
    
    printf("%d", num);

    return 0;
}