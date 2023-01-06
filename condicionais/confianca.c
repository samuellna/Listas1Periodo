#include <stdio.h>

int main(void){

    float medida1, medida2, incerteza1, incerteza2, soma1, soma2, diferenca1, diferenca2, compativel = 0;
    char letra1, letra2;

    printf("Entre com as 1as medidas e a unidade de medicao: ");
    scanf("%f %f %c", &medida1, &incerteza1, &letra1);

    printf("Entre com as 2as medidas e a unidade de medicao: ");
    scanf("%f %f %c", &medida2, &incerteza2, &letra2);

    if(letra1 == 'm'){
        medida1 *= 100.0;  
        incerteza1 *= 100.0;
    }
    else if(letra1 == 'd'){
        medida1 *= 10.0;
        incerteza1 *= 10.0;
    }
    // coloquei o padrao em cm para ambas as medidas
    if(letra2 == 'm'){
        medida2 *= 100.0;
        incerteza2 *= 100.0;
    }
    else if(letra2 == 'd'){
        medida2 *= 10.0;
        incerteza2 *= 10.0;
    }

    soma1 = medida1 + incerteza1;
    soma2 = medida2 + incerteza2;

    diferenca1 = medida1 - incerteza1;
    diferenca2 = medida2 - incerteza2;

    if((soma1 >= diferenca2 && soma1 <= soma2) || (soma2 >= diferenca1 && soma2 <= soma1)){
        printf("forte.");
    }
    else if((diferenca1 >= diferenca2 && diferenca1 <= soma2) || (diferenca2 >= diferenca1 && diferenca2 <= soma1)){
        printf("forte.");
    }
    else{
        printf("isso tem cara de desencadear um evento de distorcao espacial na proxima questao do meme man...");
    }

    return 0;
}