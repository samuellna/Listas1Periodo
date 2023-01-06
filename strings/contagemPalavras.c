#include <stdio.h>
#include <string.h>

#define TAM 300
#define TAM_SUBS 20

int main(void){

    char string[TAM], substring[TAM_SUBS] = {}; //string eh o "palheiro" e substring eh a "agulha"
    char procurar[TAM_SUBS] = {}, vet_string[30][30];
    int qtd_subs = 0;

    scanf(" %[^\n]", string);

    int tam_string = strlen(string);

    int i = 0, index_vet_string = 0, nao_printa = 0;

    while(i < tam_string){
        if(string[i] >= 65 && string[i] <= 90) string[i] += 32;
        i++;
    }

    i = 0;
    while(i < tam_string){
        int j = 0;
        while(string[i] != ' '){ // Passando a string para a string auxiliar.
            if(string[i] == '@') i++;
            else{
                substring[j] = string[i];
                j++;
                i++;
            }
        }
        i++;
        substring[j] = '\0';

        qtd_subs++; // Incrementando na primeira aparicao da substring.
        
        int k = i;
        while(k < tam_string){
            int l = 0;
            while(string[k] != ' ' && k < tam_string){
                procurar[l] = string[k];
                l++;
                k++;
            }
            k++; // Saindo do espaco.
            procurar[l] = '\0';
            if(strcmp(procurar, substring) == 0){
                // int x;
                // for(x = k - strlen(procurar); x < k; x++){                    
                //     string[x] = '@';
                // }
                qtd_subs++;
            }
            strcpy(procurar, "");
        }

        strcpy(vet_string[index_vet_string], substring);
        index_vet_string++;
        
        if(index_vet_string > 0){
            for(int x = 0; x < index_vet_string - 1; x++){
                if(strcmp(vet_string[x], substring) == 0){
                    //printf("%s - %s\n",vet_string[x], substring);
                    nao_printa = 1;
                }
            }
        }

        if(nao_printa == 0) printf("%s - %d\n", substring, qtd_subs);

        qtd_subs = 0;
        nao_printa = 0;
        strcpy(substring, "");

    }

    return 0;
}