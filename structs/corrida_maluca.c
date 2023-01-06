#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char tipo[10];
    int valor;
    int performance;
} struct_peca;

typedef struct{
    int preco;
    int performance_final;
} struct_carro;

int main(void){
    
    int dinheiro, qtd_pecas;
    scanf("%d %d", &dinheiro, &qtd_pecas);
    
    struct_peca pecas[qtd_pecas];

    if(qtd_pecas >= 3){
        
        int qtd_motores = 0, qtd_rodas = 0, qtd_latarias = 0;
        
        for(int i = 0; i < qtd_pecas; i++){
            scanf(" %s %d %d", pecas[i].tipo, &pecas[i].valor, &pecas[i].performance);
        }
        
        for(int i = 0; i < qtd_pecas; i++){ // Nesse for eu verifico se tem ao menos uma peca de cada tipo.
            if(strcmp(pecas[i].tipo, "Motor") == 0 || strcmp(pecas[i].tipo, "motor") == 0) qtd_motores++;
            
            else if(strcmp(pecas[i].tipo, "Roda") == 0 || strcmp(pecas[i].tipo, "roda") == 0) qtd_rodas++;
            
            else if(strcmp(pecas[i].tipo, "Lataria") == 0 || strcmp(pecas[i].tipo, "lataria") == 0) qtd_latarias++;
        }

        struct_peca motor[qtd_motores], roda[qtd_rodas], lataria[qtd_latarias];
        
        int j = 0, k = 0, l = 0;
        for(int i = 0; i < qtd_pecas; i++){ // Separando as pecas em categorias.
            if(strcmp(pecas[i].tipo, "Motor") == 0 || strcmp(pecas[i].tipo, "motor") == 0){ // Todos os motores vao para a struct de motor
                strcpy(motor[j].tipo, pecas[i].tipo);
                motor[j].valor = pecas[i].valor;
                motor[j].performance = pecas[i].performance;
                j++;
            }
            else if(strcmp(pecas[i].tipo, "Roda") == 0 || strcmp(pecas[i].tipo, "roda") == 0){ // As rodas, para a struct de roda
                strcpy(roda[k].tipo, pecas[i].tipo);
                roda[k].valor = pecas[i].valor;
                roda[k].performance = pecas[i].performance;
                k++;
            }
            else if(strcmp(pecas[i].tipo, "Lataria") == 0 || strcmp(pecas[i].tipo, "lataria") == 0){ // As latarias, para a struct de lataria
                strcpy(lataria[l].tipo, pecas[i].tipo);
                lataria[l].valor = pecas[i].valor;
                lataria[l].performance = pecas[i].performance;
                l++;
            }
        }
        
        if(qtd_motores > 0 && qtd_rodas > 0 && qtd_latarias > 0){ // Se tivermos ao menos uma peca de cada tipo, entao...
            int da_pra_comprar = 0;
            for(int i = 0; i < qtd_motores; i++){
                for(int j = 0; j < qtd_rodas; j++){
                    
                    int diferenca1 = dinheiro - pecas[i].valor; // Dinheiro apos a primeira compra.
                    int diferenca2 = diferenca1 - pecas[j].valor; // Dinheiro apos a segunda compra.
                    
                    for(int k = 0; k < qtd_latarias; k++){
                        if((dinheiro >= motor[i].valor) && (diferenca1 >= roda[j].valor) && (diferenca2 >= lataria[k].valor)){
                            da_pra_comprar = 1;// Podemos comprar ao menos uma peca de cada tipo.
                        } 
                    }
                }
            }
            if(da_pra_comprar == 1){
                struct_carro carro[30];                
                int l = 0, qtd_carros = 0, maior_performance;

                for(int i = 0; i < qtd_motores; i++){ // Cada for desses se refere a um tipo, esse, motor
                    for(int j = 0; j < qtd_rodas; j++){ // Esse, roda

                        int diferenca1 = dinheiro - roda[i].valor; 
                        int diferenca2 = dinheiro - lataria[j].valor;

                        for(int k = 0; k < qtd_latarias; k++){ // Esse, lataria
                            if(dinheiro >= motor[i].valor && diferenca1 >= roda[j].valor && diferenca2 >= lataria[k].valor){
                                carro[l].performance_final = motor[i].performance + roda[j].performance + lataria[k].performance;

                                carro[l].preco = motor[i].valor + roda[j].valor + lataria[k].valor;
                                qtd_carros++;
                                l++;
                            }
                        }
                    }
                }

                for(int i = 0; i < qtd_carros; i++){
                    for(int j = i + 1; j < qtd_carros; j++){
                        if(carro[j].performance_final > carro[i].performance_final){
                            int perf_aux;
                            perf_aux = carro[i].performance_final;
                            carro[i].performance_final = carro[j].performance_final; // Ordenando decrescentemente os carros de acordo com a performance
                            carro[j].performance_final = perf_aux;

                            int preco_aux;
                            preco_aux = carro[i].preco;
                            carro[i].preco = carro[j].preco; // Colocando os precos na mesma posicao de seus respectivos carros
                            carro[j].preco = preco_aux;
                        }
                    }
                }
                
                int flag_carro_comprado = 0;

                if(flag_carro_comprado == 0){
                    for(int i = 0; i < qtd_carros; i++){
                        if(dinheiro >= carro[i].preco){
                            dinheiro -= carro[i].preco; // Vai comprar o carro com a maior performance possivel, que ele consiga pagar
                            maior_performance = carro[i].performance_final;
                            flag_carro_comprado = 1;
                        }
                    }
                }
                printf("Minha nave tem uma performance de %d pontos\n", maior_performance);
                if(dinheiro > 0) printf("E ainda me sobraram %d mangos!", dinheiro);
            }
            else printf("Nao foi possivel construir uma caranga...");
        }
        else printf("Nao foi possivel construir uma caranga...");
    }
    else printf("Nao foi possivel construir uma caranga...");

    return 0;
}