#include <stdio.h>
#include <string.h>

int main(void){
    char comida[20], bebida[15];
    scanf(" %s", comida);
    for(int i = 0; i < strlen(comida); i++){
        if(comida[i] >= 65 && comida[i] <= 90) comida[i] += 32;
    }
    scanf(" %s", bebida);
    for(int i = 0; i < strlen(bebida); i++){
        if(bebida[i] >= 65 && bebida[i] <= 90) bebida[i] += 32;
    }
    float valor = 0;
    if(strcmp(comida, "lasanha") == 0) valor += 8.00;
    else if(strcmp(comida, "estrogonofe") == 0) valor += 11.00;
    if(strcmp(bebida, "suco") == 0) valor += 2.50;
    else if(strcmp(bebida, "refrigerante") == 0) valor += 3.00;
    printf("%.2f", valor);
    return 0;
}