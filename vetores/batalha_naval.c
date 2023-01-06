#include <stdio.h>
#define TAM 15

int main(void){
    
    int tabuleiro[TAM][TAM], tamanho = 0, numNavios, contador = 0, posX, posY, atkMalSuc = 0;
    scanf("%d %d", &tamanho, &numNavios);

    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            scanf("%d", &tabuleiro[i][j]);
        }
    }

    for(int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){
            if (tabuleiro[i][j] == 1) contador++;
        }
    }
    if (contador > numNavios) printf("Defesa invalida!");
    else{
        for(int i = 0; i < 2 * numNavios; i++){

            scanf("%d %d", &posX, &posY);
            if (posX >= tamanho  || posY >=tamanho )
            {
                printf("Ataque invalido!");
                return 0;
            }
            else tabuleiro[posX][posY] = 0;
            
        }
        for (int i = 0; i < tamanho; i++){
            for(int j = 0; j < tamanho; j++){
                if (tabuleiro[i][j] == 1) atkMalSuc++;
            }
        }

        if (atkMalSuc == 0) printf("Ataque venceu!");
        else printf("Defesa venceu!");
    
    }

    return 0;
}