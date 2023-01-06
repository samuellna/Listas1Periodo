#include <stdio.h>
#include <string.h>

#define MAX_TAM 30

int main(void){

    char stringMaior[MAX_TAM];
    scanf(" %s", stringMaior);

    int qtdPalavras, i = 0, j = 0, k = 0, contador = 0;

    scanf("%d", &qtdPalavras);
    char palavras[qtdPalavras][MAX_TAM];

    for (i = 0; i < qtdPalavras; i++){
        scanf(" %s", palavras[i]);
    }

    char stringMaiorAux[MAX_TAM];
    strcpy(stringMaiorAux, stringMaior);

    for (i = 0; i < qtdPalavras; i++){
        int tamanhoPalavra = strlen(palavras[i]);
        while (j < tamanhoPalavra && k < strlen(stringMaiorAux)){
            if (palavras[i][j] == stringMaiorAux[k]){
                j++;
                stringMaiorAux[k] = '~';
                k = -1;
            }
            k++;
        }
        if(j == tamanhoPalavra){
            contador++;
            strcpy(stringMaior, stringMaiorAux);
        }
        else strcpy(stringMaiorAux, stringMaior);
        j = 0;
        k = 0;
    }

    printf("E possivel formar %d palavras com esse conjunto\n", contador);

    return 0;
}