#include <stdio.h>
#define TAM 20
int main(void){

    int tamVet, vetor1[TAM], vetor2[TAM], vetor3[TAM] = {0};

    scanf("%d", &tamVet);

    for(int i = 0; i < tamVet; i++){
        scanf("%d", &vetor1[i]);
    }
    for(int i = 0; i < tamVet; i++){
        scanf("%d", &vetor2[i]);
    }

    for(int i = 0; i < tamVet; i++){
        if(i % 2 == 0){
            if(vetor1[i] > 0){
                int j = i;
                while(j < tamVet){
                    vetor3[i] += vetor2[j];
                    j++;
                }
            }
            else{
                for(int j = 0; j < tamVet; j++){
                    vetor3[i] += (vetor1[i] * vetor2[j]);
                }
            }
        }
        else if(i % 2 != 0){
            if(vetor2[i] > 0) vetor3[i] = vetor2[i];
            else{
                int j = i;
                vetor3[i] = vetor2[i];
                while(j >= 0){
                    vetor3[i] -= vetor1[j];
                    j--;
                }
            }
        }
    }
    
    for(int i = 0; i < tamVet; i++){
        if(i > 0 && i < tamVet) printf(",");
        printf("%d", vetor3[i]);
    }
    return 0;
}