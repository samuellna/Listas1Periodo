#include <stdio.h>
#include <string.h>
#define TAM 10
int main(void){

    int tamMatriz;

    scanf("%d", &tamMatriz);

    char palavras[tamMatriz][tamMatriz][26], procurar[26];
    int tamanhoPalavra[tamMatriz], tamanhoProcurar, i, flag;

    for(i = 0; i < tamMatriz; i++){
        for(int j = 0; j < tamMatriz; j++){
            scanf(" %s", palavras[i][j]);
            tamanhoPalavra[i] = strlen(palavras[i][j]);
        }
    }
    i = 0;
    while(scanf(" %s", procurar) != EOF){
        tamanhoProcurar = strlen(procurar);
        flag = 0;
        if(flag == 0){
            for(int x = 0; x < tamanhoPalavra[i] ; x++){
                for(int y = 0; y < ){
                    char substring[26] = {0};
                    for(int z = 0; z < tamanhoProcurar; z++){
                        substring[z] = palavras[y + x][x + y];
                    }
                    if(strcmp(substring, procurar) == 0){
                        printf("(%d,)", i);
                        flag = 1;
                    }
                }
                else printf("\n%s\n", substring);
                i++;
            }
        }
        
    }
    

    return 0;
}