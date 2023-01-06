#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int atk;
    int def;
    char nome[15];
    char tipo[10];
    int vantagem;
}pokemon;

typedef struct{
    char nome[15];
    float fat_vantagem;
    int vantagem;
}fator_vantagem;

int main(void){

    pokemon poke_inimigo;
    
    scanf(" %s %s %d %d", poke_inimigo.nome, poke_inimigo.tipo, &poke_inimigo.atk, &poke_inimigo.def);

    int qtdPoke;
    float atk_aux;

    scanf("%d", &qtdPoke);

    pokemon ash[qtdPoke];
    fator_vantagem poke_vantagem[qtdPoke];

    for(int i = 0; i < qtdPoke; i++){
        scanf(" %s %s %d %d", ash[i].nome, ash[i].tipo, &ash[i].atk, &ash[i].def);
        ash[i].vantagem = 0;
        atk_aux = ash[i].atk;
        // int vantagem = 0;
        if(strcmp(ash[i].tipo, "agua") == 0){
            if(strcmp(poke_inimigo.tipo, "fogo") == 0) ash[i].vantagem = 1;
            if(ash[i].vantagem == 1){
                atk_aux += atk_aux/2;
            }
        }
        
        else if(strcmp(ash[i].tipo, "fogo") == 0){
            if(strcmp(poke_inimigo.tipo, "grama") == 0) ash[i].vantagem = 1;
            if(ash[i].vantagem == 1){
                atk_aux += atk_aux/2;
            }
        }

        else if(strcmp(ash[i].tipo, "grama") == 0){
            if(strcmp(poke_inimigo.tipo, "agua") == 0) ash[i].vantagem = 1;
            if(ash[i].vantagem == 1){
                atk_aux += atk_aux/2;
            }
        }
        poke_vantagem[i].fat_vantagem = atk_aux - poke_inimigo.def;
        poke_vantagem[i].vantagem = ash[i].vantagem;
        strcpy(poke_vantagem[i].nome, ash[i].nome);
    }

    for(int i = 0; i < qtdPoke; i++){
        for(int j = i + 1; j < qtdPoke; j++){
            if(poke_vantagem[j].fat_vantagem > poke_vantagem[i].fat_vantagem){
                
                char nomeAux[15] = {};
                float vant_aux;

                strcpy(nomeAux, poke_vantagem[j].nome);
                strcpy(poke_vantagem[j].nome, poke_vantagem[i].nome);
                strcpy(poke_vantagem[i].nome, nomeAux);

                vant_aux = poke_vantagem[j].fat_vantagem;
                poke_vantagem[j].fat_vantagem = poke_vantagem[i].fat_vantagem;
                poke_vantagem[i].fat_vantagem = vant_aux;
                
            }
            else if(poke_vantagem[j].fat_vantagem == poke_vantagem[i].fat_vantagem){
                if(poke_vantagem[j].vantagem == 1 && poke_vantagem[i].vantagem == 0){

                    char nomeAux[15] = {};
                    float vant_aux;

                    strcpy(nomeAux, poke_vantagem[j].nome);
                    strcpy(poke_vantagem[j].nome, poke_vantagem[i].nome);
                    strcpy(poke_vantagem[i].nome, nomeAux);

                    vant_aux = poke_vantagem[j].fat_vantagem;
                    poke_vantagem[j].fat_vantagem = poke_vantagem[i].fat_vantagem;
                    poke_vantagem[i].fat_vantagem = vant_aux;
                }
            }
        }
    }

    for(int i = 0; i < qtdPoke; i++){
        printf("%d. %s\n", i+1, poke_vantagem[i].nome);
    }

    return 0;
}