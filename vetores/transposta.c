#include <stdio.h>
#define TAM 100

int main(){

    int i, j, lin, col, array[TAM][TAM];
    
    printf("Array's size -> ");
    scanf("%d %d", &lin, &col);

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("Number: ");
            scanf("%d", &array[j]);
        }
    }

    


    return 0;
}