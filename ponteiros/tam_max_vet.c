#include <stdio.h>

int main(void){

    int tam_memoria, tam_vet_desejado, tam_bytes_dado;
    scanf("%d", &tam_memoria);
    scanf("%d", &tam_vet_desejado);
    scanf("%d", &tam_bytes_dado);

    if((tam_vet_desejado / tam_bytes_dado) <= tam_memoria && (tam_vet_desejado / tam_bytes_dado) > 0){
        printf("Criando vetor com %d posicoes.", (tam_vet_desejado / tam_bytes_dado));
    }
    else{
        if((tam_vet_desejado / tam_bytes_dado) > 0) printf("Impossivel criar! Criando vetor com %d posicoes.", (tam_memoria / tam_bytes_dado));
        else printf("Impossivel criar! Criando vetor com 0 posicoes.");
    } 
    

    return 0;
}