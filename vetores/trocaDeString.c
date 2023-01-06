#include <stdio.h>
#include <stdlib.h>

int main(void){
    int tamAntigo, tamNovo;

    scanf("%d", &tamAntigo);
    scanf("%d", &tamNovo);
    
    char nome[tamNovo];

    int i = 0;
    
    for(int i = 0; i < tamNovo; i++){
        printf("%c", nome[i]);
    }
    return 0;
}