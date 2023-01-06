#include <stdio.h>
#define TAM 50

int main(void){
    
    int matriz[TAM][TAM], aux[TAM][TAM], lin, col, metadeLin, metadeCol;
    char letra;

    scanf("%c %d %d", &letra, &lin, &col);

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    metadeLin = ((lin + 1)/2);
    metadeCol = ((col + 1)/2);

    if(letra == 'H'){

        int i, j, k = 0, l = 0;

        for(i = metadeLin; i < lin; i++){
            for(j = col - 1; j >= 0; j--){
                aux[k][l] = matriz[i][j];         
                l++;
            }
            l = 0;
            k++;
        }
        k = 0, l = 0;
        for(i = metadeLin; i < lin; i++){
            for(j = 0; j < col; j++){
                matriz[i][j] = aux[k][l];
                l++;
            }
            l = 0;
            k++;
        }

        for(int i = 0; i < lin; i++){
            printf("\n");
            for(int j = 0; j < col; j++){
                if(matriz[i][j] < 10) printf("0%d ", matriz[i][j]);
                else printf("%d ", matriz[i][j]);     
           }
        }

    }
    else if(letra == 'V'){
        int i, j, k = 0, l = 0;

        for(i = lin - 1; i >= 0 ; i--){
            for(j = metadeCol; j < col; j++){
                aux[k][l] = matriz[i][j];
                l++;
            }
            l = 0;
            k++;
        }

        k = 0, l = 0;
        for(i = 0; i < lin; i++){
            for(j = metadeCol; j < col; j++){
                matriz[i][j] = aux[k][l];
                l++;
            }
            l = 0;
            k++;
        }

        for(int i = 0; i < lin; i++){
            printf("\n");
            for(int j = 0; j < col; j++){
                if(matriz[i][j] < 10) printf("0%d ", matriz[i][j]);
                else printf("%d ", matriz[i][j]);
           }
        }
    }

    return 0;

}