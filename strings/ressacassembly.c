#include <stdio.h>
#include <string.h>
#define TAM 15

int main (void){
    int numComand, a, i, j, k;
    char comand[TAM][TAM];

    printf("Digite a quantidade de comandos: ");
    scanf("%d", &numComand);

    for(i = 0; i < numComand; i++){
        printf("Digite o(s) comando(s):\n");
        scanf(" %[^\n]", comand[i]);
    }

    for(a = 0; a < numComand; a++){
        for(i = 0; i < 3; i++){
            for(j = i + 1; j < 3; j++){
                for(k = j + 1; k < 3; k++){
                    if(comand[a][i] == 'm' && comand[a][j] == 'o' && comand[a][k] == 'v'){
                        printf("%c = %c\n", comand[a][4], comand[a][7]);
                    }
                    else if(comand[a][i] == 'a' && comand[a][j] == 'd' && comand[a][k] == 'd'){
                        printf("%c += %c\n", comand[a][4], comand[a][7]);
                    }
                    else if(comand[a][i] == 's' && comand[a][j] == 'u' && comand[a][k] == 'b'){
                        printf("%c -= %c\n", comand[a][4], comand[a][7]);
                    }
                    else if(comand[a][i] == 'a' && comand[a][j] == 'n' && comand[a][k] == 'd'){
                        printf("%c = %c & %c\n", comand[a][4], comand[a][4], comand[a][7]);
                    }
                }
            }
        }
    }

    return 0;
}