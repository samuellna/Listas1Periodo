#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_TAM 10000

int main(void){
    char string[MAX_TAM], aux[MAX_TAM];
    int i = 0, h = 0, l = 0;
    
    scanf(" %[^\n]", string);
    int tam_string = strlen(string);

    for(int h = 0; h < tam_string; h++){
        if(string[h] >= 65 && string[h] < 90){
            string[h] += 32;
        }
    }
    
    while(i < tam_string){
        if(string[i] == ' ') h++;
        i++;
    }

    i = 0;
    int qtd_subs = h+1;
    char vet_strings[qtd_subs][150];
    
    while(i < qtd_subs){
       int g = 0;
        while(string[l] != ' '&& string[l] !='\0'){
            vet_strings[i][g] = string[l];
            l++;
            g++;    
        }
        l++;
        vet_strings[i][g] = '\0';
        i++;
    }
    
    for(int k = 1; k < qtd_subs; k++){ 
        for(int l = 1; l < qtd_subs; l++){
            if(strcmp(vet_strings[l - 1], vet_strings[l]) > 0){
                strcpy(aux, vet_strings[l - 1]);
                strcpy(vet_strings[l - 1], vet_strings[l]);  // Ordenando as strings
                strcpy(vet_strings[l], aux);
            }
        }
    }

    int s = 0, f;
    for(s = 1; s < qtd_subs; s++) {
        if(strcmp(vet_strings[s-1], vet_strings[s]) == 0) f++;
    }

    for(int k = 1; k < qtd_subs; k++){ 
        for(s = 1; s < qtd_subs; s++){
            if(strcmp(vet_strings[s-1], vet_strings[s]) == 0){
                strcpy(vet_strings[s], vet_strings[s+1]);
            }
        }
    }
    
    for(int y = 0; y < qtd_subs - f; y++){
        printf("%s", vet_strings[y]);
        if(y != qtd_subs) printf(" ");
    }
    
    return 0;
}