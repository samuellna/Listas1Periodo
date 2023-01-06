#include <stdio.h>
#include <string.h>
#define TAM 3
#define ELE 13
typedef struct{
    int dist;
    int qtdElementos;
}Mercado;

int main(void){

    Mercado mercado[TAM], mercadoAux[TAM];
    int numMercados, i, j = 0, elemAux = 0, tam;
    float preco[39], precoF = 0;
    char compras[42][30], lista[ELE][20];

    printf("Quantos mercados para comparar? ");
    scanf("%d", &numMercados);
    
    for(i = 0; i < numMercados; i++){
        printf("Distancia ate o mercado e o numero de elementos disponiveis: ");
        scanf("%d %d", &mercado[i].dist, &mercado[i].qtdElementos);

        mercadoAux[i].dist = mercado[i].dist;
        mercadoAux[i].qtdElementos = mercado[i].qtdElementos;
        elemAux += mercado[i].qtdElementos;
        
        while(j != elemAux){
            printf("Diga qual item e seu devido preco: ");
            scanf(" %s - %f", compras[j], &preco[j]);
            j++;
        }
    }

    printf("Quantos elementos Sherliro vai comprar? ");
    scanf("%d", &tam);

    for(i = 0; i < tam; i++){
        printf("Qual o %do item? ", i+1);
        scanf(" %s", lista[i]);
    }

    for(i = 0; i < numMercados; i++){
        for(j = i+1; j < numMercados; j++){
            if(mercadoAux[i].qtdElementos > mercadoAux[j].qtdElementos){

            }
            else if(mercadoAux[i].qtdElementos < mercadoAux[j].qtdElementos){

            }
            else{
                if(mercadoAux[i].dist > mercadoAux[j].dist){

                }
                else if(mercadoAux[j].dist > mercadoAux[i].dist){

                }
            }
        }
    }
    

    return 0;
}