#include <stdio.h>
#include <stdlib.h>

int main(void){
    char direcao;
    int x = 0, max_x = 15, y = 0, max_y = 15, bomba_x, bomba_y;
    
    scanf("%d", &bomba_x);
    scanf("%d", &bomba_y);

    if(x != bomba_x || y != bomba_y){
        printf("x: %d, y: %d\n", x, y);       
        while(scanf(" %c", &direcao) && direcao != 'q'){            
            switch(direcao){
                case 'w':
                    if(x > 0) x--;
                break;
                
                case 'a':
                    if(y > 0) y--;
                break;
                
                case 's':
                    if(x < max_x) x++;
                break;

                case 'd':
                    if(y < max_y) y++;
                break;
                
                default:
                    if((direcao >= 65 && direcao <= 90) || (direcao >= 97 && direcao <= 122)) printf("x: %d, y: %d\n", x, y);
                break;
            }
            if(x == bomba_x && y == bomba_y){
                printf("Voce perdeu!");
                return 0;
            } 
            if(direcao == 'w' || direcao == 'a' || direcao == 's' || direcao == 'd') printf("x: %d, y: %d\n", x, y);
        }
    }
    else printf("Voce perdeu!");
    return 0;
}