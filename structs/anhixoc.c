#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
    
typedef struct{    
    char nome[200];
    int posx_estabelecimento, posy_estabelecimento;
    char sabor[200];
    float valor;
}estabelecimento;

typedef struct{
    char coxinha_saboress[200];
    int verifica;
} coxinha_sabores;

int main(void){ 

    int x_geraldo, y_geraldo, qtd_estabelecimentos, num_sabores, dist_x, dist_y, dist_f;
    int distancia = 0;

    scanf("%d %d", &x_geraldo ,&y_geraldo);
    scanf("%d",&qtd_estabelecimentos);
    
    estabelecimento lanchonete[qtd_estabelecimentos];

    for (int i = 0; i < qtd_estabelecimentos; i++){
        scanf(" %s %d %d %s %f",lanchonete[i].nome, &lanchonete[i].posx_estabelecimento, &lanchonete[i].posy_estabelecimento, lanchonete[i].sabor, &lanchonete[i].valor);
    }
    
    scanf("%d",&num_sabores);
    
    coxinha_sabores sabor[num_sabores];

    for(int i = 0; i < num_sabores; i++){
        scanf(" %s", sabor[i].coxinha_saboress);
        sabor[i].verifica = 99;
    }

    for(int i = 0; i < qtd_estabelecimentos; i++){
        int aux;
        distancia = 1000;
        dist_x = 0;
        dist_y = 0;

        for(int k = 0; k < qtd_estabelecimentos; k++){
            dist_x = pow((x_geraldo - lanchonete[k].posx_estabelecimento),2);
            dist_y = pow((y_geraldo - lanchonete[k].posy_estabelecimento),2);
            dist_f = sqrt(dist_x + dist_y);
            
            if(dist_f <= distancia){
                aux = k;
                distancia = dist_f;
            }
        }
        
        x_geraldo = lanchonete[aux].posx_estabelecimento;
        y_geraldo = lanchonete[aux].posy_estabelecimento;
        lanchonete[aux].posx_estabelecimento = 10000;
        lanchonete[aux].posy_estabelecimento = 10000;
        printf("%s\n", lanchonete[aux].nome);
        
        for(int j = 0; j <num_sabores; j++){
            if(strcmp(lanchonete[aux].sabor, sabor[j].coxinha_saboress) == 0) sabor[j].verifica = 1;
        }
    }

    for(int i = 0; i < num_sabores; i++){
        if(sabor[i].verifica != 1){
            printf("Vou fazer as que faltaram quando chegar em casa");
            exit(1);
        }
    }
    
    printf("Completou a lista");

    return 0;
}