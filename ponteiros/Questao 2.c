//login: sna2

#include <stdio.h>
#include <stdlib.h>

int main(){
    //QUESTAO 2

    int vet[5] = {1, 2, 3, 4, 5};
    int *p = vet;
    int i = 0;
    
        for(; i < 5; i++){
            //A)
            printf("Endereco vet[%d]: %d\nEndereco p[%d]: %d\n", i+1, &vet[i], i+1, &p[i]);
            //B)
            printf("Valores de vet[%d]: %d\n", i+1, p[i]);
            //C)
            printf("Valores de vet[%d] (com *): %d\n", i+1, *p+i);
            //D)
            printf("Valores de vet[%d] (usando vet): %d\n", i+1, vet[i]);
            printf("Valores de vet[%d] (usando vet): %d\n", i+1, *vet);
        }
    
    return 0;
}