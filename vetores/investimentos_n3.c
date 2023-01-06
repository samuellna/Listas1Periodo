#include <stdio.h>
#define TAM 4
int main(void){
    int cidade[TAM][TAM] = {0}, x = 0, y = 0;;
    char comando;

    for(int i = 0; i < 20; i++){
        scanf("%c ", &comando);
        switch(comando){
            case 'e':
                y--;
                cidade[x][y]++;
            break;

            case 'd':
                y++;
                cidade[x][y]++;
            break;

            case 'c':
                x --;
                cidade[x][y]++;
            break;

            case 'b':
                x++;
                cidade[x][y]++;
            break;

            default:
            break;
        }
    }
    int coord = 0, posXFinal, posYFinal;
    for ( int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){   
            if(cidade[i][j] > coord){
                coord = cidade[i][j];
                posYFinal=i;
                posXFinal=j;
            }
        }
    }

    printf("Coordenada X:%d, Y:%d", posXFinal, posYFinal);

    return 0;
}