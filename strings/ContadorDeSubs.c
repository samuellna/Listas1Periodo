#include <stdio.h>
#include <string.h>
#define TAM1 151

int main(void){

    char palheiro[TAM1], procurar[TAM1] = {};

    fflush(stdin);
    fgets(palheiro, TAM1, stdin);
    fflush(stdin);
    int tamPalheiro = strlen(palheiro);
    palheiro[tamPalheiro - 1] = '\0'; 
    tamPalheiro = strlen(palheiro);

    char agulha[TAM1];

    fflush(stdin);
    fgets(agulha, TAM1, stdin);
    fflush(stdin);    
    int tamAgulha = strlen(agulha);
    agulha[tamAgulha - 1] = '\0'; 
    tamAgulha = strlen(agulha);
    
    printf("TAMPALHEIRO: %d\nTAMAGULHA: %d\n\n", tamPalheiro, tamAgulha);
    
    for(int i = 0; i < tamAgulha; i++){
        if(agulha[i] >= 65 && agulha[i] <= 90) agulha[i] += 32;
    }

    int i = 0, substring = 0;
    
    while(i < tamPalheiro){
        int k = i;
        for(int j = 0; j < tamAgulha; j++){
            procurar[j] = palheiro[k];
            if(procurar[j] >= 65 && procurar[j] <= 90) procurar[j] += 32; // Colocando todos os caracteres em minusculo
            k++;
        }
        printf("Comparacao de: %s com %s\n", agulha, procurar);
        if(strcmp(agulha, procurar) == 0) substring++;
        i++;
    }

    printf("%d\n", substring);

    return 0;
}