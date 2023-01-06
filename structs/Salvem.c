#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 25

typedef struct{
    char nome[20], foco;
    int din;
}Time;

typedef struct{
    char nomeJog[20], origem[30];
    int atk, def, custo;
}Jogador;


int main(void){
    Time time[TAM];
    Jogador jog[TAM];
    int qtdTimes, qtdJog, dinAux[TAM], numJog[TAM], i, j, k, flag = 0;

    printf("Quantos times vao participar? ");
    scanf("%d", &qtdTimes);

    for(i = 0; i < qtdTimes; i++){
        printf("Nome do time -> ");
        scanf(" %s", time[i].nome);

        if(strcmp(time[i].nome, "Vasco") == 0 || strcmp(time[i].nome, "vasco") == 0){
            time[i].din = 0;
            time[i].foco = 0;
        }else{
            printf("Dinheiro e foco -> ");
            scanf("%d %c", &time[i].din, &time[i].foco);
            dinAux[i] = time[i].din;
            numJog[i] = 0;
        }
    }
    
    printf("Numero de jogadores a serem lidos -> ");
    scanf("%d", &qtdJog);

    for(i = 0; i < qtdJog; i++){
        printf("Nome do jogador e seu pais de origem-> ");
        scanf(" %s %s", jog[i].nomeJog, jog[i].origem);
    
        printf("Ataque e Defesa -> ");
        scanf("%d %d", &jog[i].atk, &jog[i].def);

        printf("Custo -> ");
        scanf("%d", &jog[i].custo);

    }

    for(i = 0; i < qtdTimes; i++){
        for(j = i+1; j < qtdTimes; j++){
            for(k = 0; k < qtdJog; k++){

                if(time[i].din >= jog[k].custo && time[j].din < jog[k].custo){
                    time[i].din -= jog[k].custo;
                    numJog[i]++;
                }
                else if(time[i].din >= jog[k].custo && time[j].din >= jog[k].custo){
                    if(jog[k].atk >= jog[k].def){
                        if(time[i].foco == 'A' && time[j].foco != 'A'){
                            time[i].din -= jog[k].custo;
                            numJog[i]++;
                        }
                        else if(time[j].foco == 'A' && time[i].foco != 'A'){
                            time[j].din -= jog[k].custo;
                            numJog[j]++;
                        }
                        else{
                            if(time[i].din > time[j].din){
                                time[i].din -= jog[k].custo;
                                numJog[i]++;
                            }
                            else if(time[j].din > time[i].din){
                                time[j].din -= jog[k].custo;
                                numJog[j]++;
                            }
                            else{
                                time[i].din -= jog[k].custo;
                                numJog[i]++;
                            }
                        }
                    }
                    else if(jog[k].atk < jog[k].def){

                        if(time[i].foco == 'D' && time[j].foco != 'D'){
                            time[i].din -= jog[k].custo;
                            numJog[i]++;
                        }
                        else if(time[j].foco == 'D' && time[i].foco != 'D'){
                            time[j].din -= jog[k].custo;
                            numJog[j]++;
                        }
                        else{
                            if(time[i].din > time[j].din){
                                time[i].din -= jog[k].custo;
                                numJog[i]++;
                            }
                            else if(time[j].din > time[i].din){
                                time[j].din -= jog[k].custo;
                                numJog[j]++;
                            }
                            else{
                                time[i].din -= jog[k].custo;
                                numJog[i]++;
                            }
                        }
                    }
                    else{
                        if(time[i].din > time[j].din){
                            time[i].din -= jog[k].custo;
                            numJog[i]++;
                        }
                        else if(time[j].din > time[i].din){
                            time[j].din -= jog[k].custo;
                            numJog[j]++;
                        }
                        else{
                            time[i].din -= jog[k].custo;
                            numJog[i]++;
                        }
                    }
                }
            
            }
        }
    }

    for(i = 0; i < qtdJog; i++){
        for(j = 0; j < qtdTimes; j++){
            if(strcmp(time[j].nome, "Vasco") == 0 || strcmp(time[j].nome, "vasco") == 0 ){
                printf("Vasco nao tem salvacao, tomou 3 pro vitoria em casa\n");
            }
            else if(jog[i].custo + time[j].din == dinAux[i]){
                printf("%s eh do %s\n", jog[i].custo, time[j].nome);
            }
            else if(jog[i].custo > dinAux[i]){
                printf("%s ta muito caro\n", jog[i].nomeJog);
            }
        }
    }
    for(i = 0; i < qtdTimes; i++){
        for(j = 0; j < qtdJog; j++){
            if(strcmp(time[i].nome, "Vasco") != 0 || strcmp(time[i].nome, "vasco") != 0 && flag){
                printf("Situacao %s\n", time[i].nome);
                printf("Dinheiro restante = %d\nNumero de jogadores = %d\n", time[i].din, numJog[i]);
                if(jog[j].custo + time[i].din == dinAux[i]){
                    printf("%s %s\n", jog[j].nomeJog, jog[j].origem);
                }
            }else{
                flag = 1;
            }
        }
    }


    return 0;
}