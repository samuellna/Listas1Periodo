#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 100

typedef struct{
    char nome[20], tipo[4];
    int atk, def;
}Pokedex;

int main(void){
    Pokedex pokemon[TAM];
    char funcao[15], aux, tipoAux[TAM][4], poke1[20], poke2[20];
    int numPoke, comparar, comparar2, flag1 = 0, flag2 = 0, i, j, atk1, atk2, def1, def2, atkResult, atkResult_ini, counter = 0;

    printf("Digite a quantidade de pokemons a serem lidos -> ");
    scanf("%d", &numPoke);

    for(i = 0; i < numPoke; i++){
        printf("Digite o nome do %do pokemon:\n", i+1);
        scanf(" %s", pokemon[i].nome);

        printf("Tipo:\n");
        scanf(" %s", pokemon[i].tipo);
        strcpy(tipoAux[i], pokemon[i].tipo);

        printf("Ataque:\n");
        scanf("%d", &pokemon[i].atk);

        printf("Defesa:\n");
        scanf("%d", &pokemon[i].def);
    }

    printf("Digite a funcao:\n");

    while(scanf(" %[^\n]", funcao) && strcmp(funcao, "0") != 0){
        aux = funcao[1];
        if(aux == 'i'){
            for(i = 0; i < numPoke; i++){
                if(tipoAux[i][0] == funcao[5] && tipoAux[i][1] == funcao[6] && tipoAux[i][2] == funcao[7]){
                    counter++;
                    printf("Pokemon %d: %s\n", counter, pokemon[i].nome);
                    printf(" Ataque: %d\n", pokemon[i].atk);
                    printf(" Defesa: %d\n", pokemon[i].def);
                }
            }
        }
        else if(aux == 'u'){

            printf("Digite os pokemons para lutar:\n");
            scanf(" %s vs %s", poke1, poke2);

            for(i = 0; i < numPoke; i++){

                for(j = i + 1; j < numPoke; j++){

                    comparar = strcmp(pokemon[i].nome, poke1);
                    comparar2 = strcmp(pokemon[j].nome, poke2);
                    
                    if(comparar == 0 && flag1 == 0){
                        atk1 = pokemon[i].atk;
                        def1 = pokemon[i].def;
                        flag1 = 1;
                    }
                    if(comparar2 == 0 && flag2 == 0){
                        atk2 = pokemon[j].atk;
                        def2 = pokemon[j].def;

                        atkResult = atk1 - def2;
                        atkResult_ini = atk2 - def1;
                        printf("%d %d", atkResult, atkResult_ini);
                        flag2 = 1;
                    }
                }
            }
            if(atkResult > atkResult_ini && flag1 == 1 && flag2 == 1){
                printf("%s deitou %s na porrada\n", poke1, poke2);
                flag1 = 2, flag2 = 2;
            }
            else if(atkResult < atkResult_ini && flag1 == 1 && flag2 == 1){
                printf("%s deitou %s na porrada\n", poke2, poke1);
                flag1 = 2, flag2 = 2;
            }
            else{
                printf("parece que temos um empate\n");
            }
        }
        printf("Digite a funcao:\n");
    }

    return 0;
}