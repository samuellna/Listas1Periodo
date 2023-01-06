#include <stdio.h>

int main(void){

    int quad1, quad2, impar;
    do{
        scanf("%d", &impar);
        quad1 = (impar + 1) / 2;
        quad2 = quad1 - 1;
        if(impar != 0) printf("%d - %d\n", quad1 * quad1, quad2 * quad2);
    }while(impar!=0);
    
    return 0;
}