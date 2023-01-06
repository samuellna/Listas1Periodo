#include <stdio.h>
#define TAM 15
int main(void){

    int linha, coluna, counter = 0;
    char vetor[TAM][TAM];
    scanf("%dx%d", &linha, &coluna);

    int i, j;

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            scanf("%c ", vetor[i][j]);
        }
    }

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            if(vetor[i][j] == 'd'){
                int aux[2] = {i, j};
            }
            if(vetor[i][j] == '_'){
                counter++;
            } 

        }
    }


    return 0;
}