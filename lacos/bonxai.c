#include <stdio.h>
#include <string.h>

int main(){
    int i = 0, j, aux, valorPal = 0, divisores = 0, divPrimos = 0, contador = 6, chute, valorF = 0, salvo = 0, morto = 0;
    char palavra[20];

    printf("Digite a palavra:\n");
    scanf(" %s", palavra);

    while(palavra[i] != '\0'){
        valorPal += palavra[i];
        i++;
    }

    aux = valorPal/2;

    printf("Valor ASCII da palavra: %d\n", valorPal);

    if(valorPal % 17 == 0){
        printf("Agora estou Putin, Bonxai!\n");
        exit(1);
    }



    do{
        contador--;

        printf("Digite o valor: ");
        scanf("%d", &chute);
        valorF += chute;

        if(valorF == valorPal){
            printf("Parabueins! Voce ajudou Bonxai a escapar.\n");
            break;
        }
        else if(valorF > valorPal){
            printf("Agora voce passou dos limites!\n");
            break;
        }
        else if(contador == 0 && valorF < valorPal){
            printf("Bonxai foi de base.\n");
        }

    }while(contador != 0);

    return 0;
}