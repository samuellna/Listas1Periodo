#include <stdio.h>
#include <string.h>
#define SIZE 20
int main(void){
    
    int arraySize, asciiWord, i, j = 1, even = 0, odd = 0;
    char word[SIZE][30]; 

    printf("Tell array's size -> ");
    scanf("%d", &arraySize);

    arraySize *= 2;

    for(i = 1; i <= arraySize; i++){
        printf("Write the word:\n");
        scanf(" %s", word[i]);
    }

    for(i = 1; i <= arraySize; i++){

        if(i%2 != 0){
            while(word[i][j] != '\0'){
                odd += word[i][j];
                j++;
            }
        }
        else{
            while(word[i][j] != '\0'){
                even += word[i][j];
                j++;
            }
        }
    }

    if(even > odd){
        printf("Os pares venceram com %d pontos!", even);
    }
    else if(even < odd){
        printf("Os impares venceram com %d pontos!", odd);
    }
    else{
        printf("Tivemos um empate em %d pontos!", even);
    }
    
    return 0;
}