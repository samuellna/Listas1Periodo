#include <stdio.h>
#include <string.h>

int main(void){
    int tamArray;

    scanf("%d", &tamArray);

    // if(tamArray == 1){
    //     char piso;
    //     int qtdJog, qtdPassos, vencedor = 0;

    //     scanf("%c ", &piso);
    //     scanf("%d", &qtdJog);
    //     printf("aaaaaaaaa");
    //     for(int i = 0; i < qtdJog; i++){
    //         char direcao[qtdJog];
    //         char direcaoAux[qtdJog];

    //         scanf("%d", &qtdPassos);

    //         fflush(stdin);
    //         fgets(direcao, qtdPassos + 1, stdin);
    //         fflush(stdin);

    //         int k = qtdPassos - 1;

    //         for(int j = 0; j < qtdPassos; j++){
    //             direcaoAux[j] = direcao[k];
    //         }
            
    //         if(strcmp(direcao, direcaoAux) == 0){
    //             vencedor++;
    //         }
    //     }

    //     printf("%d", vencedor);
    // }

    char pisos[tamArray][tamArray];

    for(int i = 0; i < tamArray; i++){
        fflush(stdin);
        fgets(pisos[i], tamArray, stdin);
        fflush(stdin);
    }
    pisos[0][0] = 'o';
    int numJogadores, numJogadas, vencedores = 0;

    scanf("%d", &numJogadores);

    for(int i = 0; i < numJogadores; i++){

        scanf("%d", &numJogadas);
        
        char comandos[numJogadas];
        char comandoAux[numJogadas];

        fflush(stdin);
        fgets(comandos, numJogadas + 1, stdin);
        fflush(stdin);

        int k = numJogadas - 1;

        for(int j = 0; j < numJogadas; j++){
            comandoAux[j] = comandos[k]; // pegando a strign ao contrario
            k--;
        }
        
        if(strcmp(comandos, comandoAux) == 0){
            vencedores++; // verificando se e palindromo
        }
        else{ // se nao for...

            int x = 0, y = 0, flag = 0;
            if(flag == 0){
                for(int j = 0; j < numJogadas; j++){
                    switch(comandos[j]){
                        //vendo cada caractere
                        case 'C':
                            x--; // sobe 1 linha
                            if(x < 0) flag++; // se passar das extremidades, morre
                            else if(pisos[x][y] == ' ' || pisos[x + 1][y] == ' ') flag++; // se for um espaco vago, morre tbm
                            else{
                                if(pisos[x + 1][y] == 'x') pisos[x][y] = ' '; // caso contrario, se o local que o kra estava pisando fosse x, transformava em espaco vago
                            }
                            
                        break;

                        case 'B':
                            x++; // desce 1 linha
                            if(x > tamArray) flag++; // passou das extremidades, morreu
                            else if(pisos[x][y] == ' ' || pisos[x - 1][y] == ' ') flag++;
                            else{
                                if(pisos[x - 1][y] == 'x') pisos[x][y] = ' '; // caso contrario, se o local que o kra estava pisando fosse x, transformava em espaco vago
                            }
                        break;

                        case 'E':

                            y--;
                            if(y < 0) flag++; // passou das extremidades, morreu
                            else if(pisos[x][y] == ' ' || pisos[x][y + 1] == ' ') flag++;// se for um espaco vago, morre tbm
                            else{
                                if(pisos[x][y + 1] == 'x') pisos[x][y] = ' '; // caso contrario, se o local que o kra estava pisando fosse x, transformava em espaco vago
                            }
                                
                        break;

                        case 'D':
                            y++;
                            if(y > tamArray) flag++; // passou das extremidades, morreu
                            else if(pisos[x][y] == ' ' || pisos[x][y - 1] == ' ') flag++; // se for um espaco vago, morre tbm
                            else{
                                if(pisos[x][y - 1] == 'x') pisos[x][y] = ' '; // caso contrario, se o local que o kra estava pisando fosse x, transformava em espaco vago
                            }
                        break;

                        default:
                        break;
                    }
                }
            }
            if(flag == 0) vencedores++;
        }
    }

    printf("%d", vencedores);   

    return 0;
}