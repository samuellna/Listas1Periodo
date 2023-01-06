#include <stdio.h>
#include <string.h>
#define TAM 20

typedef struct{
    char nome[20];
    char tipo[4];
    int atk;
    int def;
}Pokedex;

int main (){
    Pokedex pokemon[TAM];
    char comando[TAM];
    int i, j = 0, k = 0, g = 0;
    int num_Poke;

    printf("Numero de Pokemons:\n");
    scanf("%d", &num_Poke);
    printf("---------------------------------------\n");

    for(i = 0; i < num_Poke; i++){

        printf("Nome:\n");
        scanf(" %[^\n]", pokemon[i].nome);

        printf("Tipo:\n");
        scanf(" %[^\n]", pokemon[i].tipo);

        printf("Ataque:\n");
        scanf("%d", &pokemon[i].atk);

        printf("Defesa:\n");
        scanf("%d", &pokemon[i].def);

        printf("---------------------------------------\n");
    }
    
    for(i = 0; i < num_Poke; i++){
        printf("%s\n%s\n%d\n%d\n", pokemon[i].nome, pokemon[i].tipo, pokemon[i].atk, pokemon[i].def);
    }

    while(scanf(" %[^\n]", comando[g]) && comando != 0 ){

        if(strcmp(comando[g], "luta") == 0){
            //Comando luta:

            for(strcmp(comando[g], "luta")  == 0){

                printf("Pokemons para a batalha:\n");

                scanf(" %[^\n] vs %[^\n]", pokemon[j].nome, pokemon[k].nome);

                //Comparar os pokemons lidos com os que estao na pokedex
                for(i = 0; i < num_Poke; i++){ 

                    if(strcmp (pokemon[j].nome, pokemon[i].nome) == 0){
                        
                        strcpy(pokemon[j].nome, pokemon[i].nome);
                        strcpy(pokemon[j].tipo, pokemon[i].tipo);
                        strcpy(pokemon[j].atk, pokemon[i].atk);
                        strcpy(pokemon[j].def, pokemon[i].def);

                    }

                    if(strcmp (pokemon[k].nome, pokemon[i].nome) == 0){

                        strcpy(pokemon[k].nome, pokemon[i].nome);
                        strcpy(pokemon[k].tipo, pokemon[i].tipo);
                        strcpy(pokemon[k].atk, pokemon[i].atk);
                        strcpy(pokemon[k].def, pokemon[i].def);

                    }
                }
                printf("-------------------------------------------\n");
                printf("%s\n%s\n%d\n%d\n", pokemon[j].nome, pokemon[j].tipo, pokemon[j].atk, pokemon[j].def);

                printf("-------------------------------------------\n");
                printf("%s\n%s\n%d\n%d\n", pokemon[k].nome, pokemon[k].tipo, pokemon[k].atk, pokemon[k].def);

                if(pokemon[j].atk - pokemon[k].def > pokemon[k].atk - pokemon[j].def){
                printf("%s deitou %s na porrada\n", pokemon[j].nome, pokemon[k].nome);
                }

                else if(pokemon[j].atk - pokemon[k].def < pokemon[k].atk - pokemon[j].def){
                    printf("%s deitou %s na porrada\n", pokemon[k].nome, pokemon[j].nome);
                }

                else{
                    printf("pareceque temos um empate\n");
                }

                k++;
                j++;

            }

        }
        
        g++;
    }        
    
    return 0;
}