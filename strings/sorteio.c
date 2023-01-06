#include <stdio.h>
#include <string.h>

int main(){
    char matriz1[50][12], matriz2[50][12];
    char nome[12];
    int tam, i, j, k, g, tamAux, bilhete1, bilhete2;

    scanf("%d", &tam);
    
    for(i = 1; i <= tam; i++){

        scanf(" %s", matriz1[i]);
        
    }

    printf("---------------------\n");

    for( i = 1; i <= tam; i++){
        for(j = i + 1; j <= tam; j++){
            if( strcmp(matriz1[i], matriz1[j]) > 0){
                strcpy(nome, matriz1[j]); //nome = matriz[j]
                strcpy(matriz1[j], matriz1[i]); // matriz[j] = matriz[i]
                strcpy(matriz1[i], nome); // matriz[i] = nome
            }
        }
    }

    for( i = 1; i <= tam; i++){
        printf("%s\n", matriz1[i]);
    }
    
    printf("---------------------\n");
    
    scanf("%d", &tamAux);
    
    for(k = 1; k <= tamAux; k++){
        scanf(" %s", matriz2[k]);
    }

    printf("---------------------\n");

    for( k = 1; k <= tamAux; k++){
        for(g = k + 1; g <= tamAux; g++){
            if( strcmp(matriz2[k], matriz2[g]) > 0){
                strcpy(nome, matriz2[g]); //nome = matriz[j]
                strcpy(matriz2[g], matriz2[k]); // matriz[j] = matriz[i]
                strcpy(matriz2[k], nome); // matriz[i] = nome
            }
        }
    }

    for( k = 1; k <= tamAux; k++){
        printf("%s\n", matriz2[k]);
    }
    
    printf("---------------------\n");
    
    scanf("%d %d", &bilhete1, &bilhete2);
    
    if( strcmp(matriz1[bilhete1], matriz2[bilhete2]) == 0){
        printf("Quem ganhou tudo hoje foi %s", matriz1[bilhete1]);
    }
    else{
        printf("Quem ganhou o carro foi: %s\nQuem ganhou a moto foi: %s", matriz1[bilhete1], matriz2[bilhete2]);
    }
    
    return 0;
}