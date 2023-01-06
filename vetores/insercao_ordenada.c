#include <stdio.h>
// #define TAM 100
int main(void){

    int tamVet;
    int aux;
    
    scanf("%d", &tamVet);
    
    int vetor[tamVet];
    
    for(int i = 0; i < tamVet; i++){
        scanf("%d", &vetor[i]);
        if(i > 0){
            int j = i;
            while(j >= 0){
                for(int k = 0; k < j; k++){
                    if(vetor[j] < vetor[k]){
                        aux = vetor[j];
                        vetor[j] = vetor[k];
                        vetor[k] = aux;
                    }
                }
                j--;
            }
        }
    }

    for(int i = 0; i < tamVet; i++){
        if(i > 0 && i < tamVet) printf(",");
        printf("%d", vetor[i]);
    }

    return 0;
}