#include <stdio.h>
#include <string.h>
#define TAM 50
typedef struct{
    char nome[50];
    float valorMercado;
    int jogadoresG;
    int titulos;
    char neymar[4];
    char flamengo[3];
}Time;

int main(){
    Time time[TAM];
    int nTimes, i, j, auxiliar;
    char aux[30];
    float valorAux;

    printf("Quantidade de Times:\n");
    scanf("%d", &nTimes);

    for(i = 0; i < nTimes; i++){

        printf("Nome:\n");
        scanf(" %[^\n]", time[i].nome);

        printf("Valor no mercado, N. de Grandes Jogadores, N. de titulos:\n");
        scanf("%f %d %d", &time[i].valorMercado, &time[i].jogadoresG, &time[i].titulos);

        printf("Tem o Neymar?\n");
        scanf(" %s", time[i].neymar);

        printf("E o Flamengo de 2019?\n");
        scanf(" %s", time[i].flamengo);

        printf("--------------------------------------------------\n");

    }

    for(i = 0; i < nTimes; i++){

        if(time[i].jogadoresG > 0){
            time[i].valorMercado += time[i].jogadoresG * 100;
        }
        if(time[i].titulos > 0){
            time[i].valorMercado += time[i].titulos * 2000;
        }
        if(strcmp(time[i].neymar, "sim") == 0 || strcmp(time[i].neymar, "Sim") == 0){
            time[i].valorMercado += 10000;
        }
        if(strcmp(time[i].flamengo, "sim") == 0 || strcmp(time[i].flamengo, "Sim") == 0){
            time[i].valorMercado += 20000;
        }
        printf("%.2f", time[i].valorMercado);
    }

    /*for( i = 0; i < nTimes; i++){
        for(j = i + 1; j <= nTimes; j++){
            if( time[j].valorMercado > time[i].valorMercado){
                strcpy(aux, time[i].nome);
                strcpy(time[i].nome, time[j].nome); // Ordenando o nome dos times
                strcpy(time[j].nome, aux);

                valorAux = time[i].valorMercado;
                time[i].valorMercado = time[j].valorMercado; // Ordenando o valor dos times
                time[j].valorMercado = valorAux;

            }
        }
    }

    for(i = 0; i < nTimes; i++){
        printf("Nome: %s\nValor: %.2f\n", time[i].nome, time[i].valorMercado);
        printf("-------------------------------------------------------\n");
    }*/

    return 0;
}