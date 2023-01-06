#include <stdio.h>
#include <string.h>
#define TAM 30

typedef struct{
    int id;
    float temperatura;
    char fumaca;
}Alarme;

int main(){
    Alarme lista[TAM];
    int testes, count, i, j;
    float media = 0.0, taxa = 0.0;

    scanf("%d", &testes);
    scanf("%d", &count);

    for(i = 1; i <= testes; i++){

        for(j = 0; j < count; j++){
            scanf("%d", &lista[j].id);
            scanf("%f", &lista[j].temperatura);
            scanf(" %c", &lista[j].fumaca);
        }

        for(j = 0; j < count; j++){
            media += lista[j].temperatura;
        }
                    
        media /= count;

        taxa = media * 0.15;

        taxa += media;

        printf("TESTE %d\n", i);

        for(j = 0; j < count; j++){
            if((lista[j].fumaca == 'S') || (lista[j].temperatura > taxa)){
                printf("%d\n", lista[j].id);
            }
        }

        scanf("%d", &count);

    }

    return 0;
}