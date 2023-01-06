#include <stdio.h>
#include <string.h>
#define TAM 45

typedef struct{
   int dia;
   int mes;
   int ano;
}Data;

typedef struct{
    int horas;
    int min;
}Horario;

typedef struct{
    int passagem;
    Data data;
    char partida[25];
    char destino[25];
    Horario horario;
    int poltrona;
    int idade;
    char nome[90];
}registro; // Aqui eu defini a o registro de cada passageiro

int main(){
    registro passageiro[TAM];
    int i = 0, total = 0;
    float media = 0, soma = 0;
    
    printf("Numero da passagem:\n");

    while(scanf("%d", &passageiro[i].passagem) && (passageiro[i].passagem != -1)){

        printf("Entre com a data da passagem\n");
        scanf("%d/%d/%d", &passageiro[i].data.dia, &passageiro[i].data.mes, &passageiro[i].data.ano);

        printf("Ponto de partida: \n");
        scanf(" %24[^\n]", passageiro[i].partida);
        
        printf("Destino: \n");
        scanf(" %24[^\n]", passageiro[i].destino);

        printf("Horario de partida: \n");
        scanf("%d:%d", &passageiro[i].horario.horas, &passageiro[i].horario.min);

        printf("Numero da sua poltrona: \n");
        scanf("%d", &passageiro[i].poltrona);

        printf("Idade do passageiro: \n");
        scanf("%d", &passageiro[i].idade);

        printf("Nome do Passageiro: \n");
        scanf(" %89[^\n]", passageiro[i].nome);

        printf("----------------------------------------\n");
                
        printf("\n %d\n %s\n %s\n %d:%d\n %d\n %d\n %s\n", passageiro[i].passagem, passageiro[i].partida,
        passageiro[i].destino, passageiro[i].horario.horas, passageiro[i].horario.min, passageiro[i].poltrona, passageiro[i].idade, passageiro[i].nome);

        printf("----------------------------------------\n");
            
        i++;

        printf("Numero da passagem:\n");

    }

    total = i;
    i = 0;
    
    for(i = 0; i < total; i++){
        soma += passageiro[i].idade;
    }

    media = soma/total;

    for(i = 0; i < total; i++){
        if((passageiro[i].idade > media) && (passageiro[i].poltrona % 2 == 0)){
            printf("%s\n", passageiro[i].nome);
        }
    }
    
    return 0;
}