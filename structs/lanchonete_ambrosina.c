#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int codigo;
    char descricao[15];
    float preco;
}produto;

typedef struct{
    int codigo;
    int qtd;    
}pedido;

int main(void){

    int qtd_produtos, i;
    float divida = 0;
    scanf("%d", &qtd_produtos);
    produto produtos[qtd_produtos];

    for(i = 0; i < qtd_produtos; i++){
        scanf("%d", &produtos[i].codigo);
        scanf(" %[^\n]", produtos[i].descricao);
        scanf("%f", &produtos[i].preco);
    }
    
    i = 0;

    pedido pedidos;
    
    while(scanf("%d", &pedidos.codigo) && pedidos.codigo != 0){
        scanf("%d", &pedidos.qtd);
        if(pedidos.qtd > 0){
            for(i = 0; i < qtd_produtos; i++){
                if(pedidos.codigo == produtos[i].codigo){
                    divida += produtos[i].preco * pedidos.qtd;
                }
            }
        }
    }
    
    printf("%.2f", divida);

    return 0;
}