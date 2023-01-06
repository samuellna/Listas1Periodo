#include <stdio.h>
#include <stdlib.h>

int main(void){

    int *numero = NULL, moda = 0;
    float mediana;
    int i = 0, qtdNum = 0, numero_aux;

    printf("Digite um valor: ");
    while(scanf("%d", &numero_aux) != EOF){
        numero = (int *) realloc(numero, (i + 1) * sizeof(int));
        numero[i] = numero_aux;
        if(numero == NULL){
            printf("Erro ao realocar");
            free(numero);
            exit(1);
        }
        i++;
        qtdNum++;
        printf("Digite um valor: ");
    }

    int aux;
    for(i = 0; i < qtdNum; i++){
        for(int j = i + 1; j < qtdNum; j++){
            if(numero[i] > numero[j]){
                aux = numero[i];
                numero[i] = numero[j];
                numero[j] = aux;
            }
        }
    }
    
    if(qtdNum % 2 == 0) mediana = (numero[qtdNum / 2] + numero[(qtdNum / 2) - 1]) / 2.0;
    else mediana = numero[qtdNum / 2];
    
    int qtd_repeticoes[qtdNum], maior_rpt = 0, index_moda;

    for(int i = 0; i < qtdNum; i++){
        qtd_repeticoes[i] = 0; // Inicializando todas as casas do vetor como 0.
    }

    for(int i = 0; i < qtdNum; i++){
        for(int j = 0; j < qtdNum; j++){
            if(numero[i] == numero[j]){
                qtd_repeticoes[i]++; // Incrementando as repeticoes em cada casa do vetor.
            }
        }
    }

    for(int i = 0; i < qtdNum; i++){
        if(qtd_repeticoes[i] > maior_rpt){
            maior_rpt = qtd_repeticoes[i];
            index_moda = i;
        }
    }
    moda = numero[index_moda];

    printf("%d, %.1f", moda, mediana);
    
    free(numero);
    
    return 0;
}