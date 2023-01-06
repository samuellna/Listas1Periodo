#include <stdio.h>
#include <stdlib.h>

int main(void){
    char direcao = 'k';
    int x = 0, max_x = 15, y = 0, max_y = 15;

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
                printf("x: %d, y: %d\n", x, y);
            break;
        }
        printf("x: %d, y: %d\n", x, y);
    }

    return 0;
}