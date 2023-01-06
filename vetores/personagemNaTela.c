#include <stdio.h>
#include <stdlib.h>

int main(void){
    char personagem = 'O';
    char direcao;
    int baixos=0;
    int max_baixos = 15;
    int direitas=0;
    int max_direitas = 15;
    while(1){
        system("cls");
        for(int i=0;i<baixos;i++){
            printf("\n");
        }
        for(int i=0;i<direitas;i++){
            printf("\t");
        }
        printf("%c\n\n\n", personagem);
        for(int i=0;i<max_baixos-baixos;i++){
            printf("\n");
        }
        printf("Digite uma direcao: w - cima\ta - esquerda\ts - baixo\td - direita\t");
        switch (direcao){
            case 'w': {
                if (baixos > 0){baixos--;}
                break;
            }
            case 'a': {
                if (direitas > 0) {direitas--;}
                break;
            }
            case 's': {
                if (baixos < max_baixos) {baixos++;}
                break;
            }
            case 'd': {
                if (direitas < max_direitas) {direitas++;}
                break;
            }
        }
        scanf("%c", &direcao);
    }
    return 0;
}