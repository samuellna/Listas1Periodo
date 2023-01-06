#include <stdio.h>
#include <stdlib.h>

int main(void){

    int tamanho_maximo, tamanho_desejado, bytes_dados;

    printf("Digite a capacidade de armazenamento -> ");
    scanf("%d", &tamanho_maximo);
    
    printf("Digte o tamanho do vetor -> ");
    scanf("%d", &tamanho_desejado);

    printf("Quantidade de bytes -> ");
    scanf("%d", &bytes_dados);

    int tamanho_vet = (tamanho_desejado / bytes_dados);
    int tamanho_vet_max = (tamanho_maximo / bytes_dados);

    if(tamanho_maximo >= 1){
        if(tamanho_vet_max >= tamanho_desejado) printf("Criando vetor com %d posicoes.", tamanho_desejado); 
        else printf("Impossivel criar! Criando vetor com %d posicoes.", tamanho_vet_max);
    }
    else printf("Impossivel criar! Criando vetor com %d posicoes.", tamanho_vet_max);

    return 0;
}