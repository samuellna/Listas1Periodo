#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 30

int numero_em_bin(int *numero){
    printf("A");
    int resto;
    resto = (*numero) % 2;
    printf("Resto: %d\n", resto);
    (*numero) /= 2;
    return resto;
}

int main(void){
    int num, num_aux[TAM] = {0};
    scanf("%d", &num);
    char string[TAM] = {};

    int i = 0;
    while(num > 1){
        num_aux[i] = numero_em_bin(&num);
        printf("num_aux[i] = %d\n", num_aux[i]);
        i++;
    }

    
    //printf("String decodificada: %s\n", string_decod);

    return 0;
}