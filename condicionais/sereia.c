#include <stdio.h>

int main(void){

    int acorde, tonica, terca, quinta, descobriAcorde = 0;

    printf("Digite o numero a ser convertido: ");
    scanf("%d", &acorde);

    tonica = (acorde/100) % 7;
    terca = (acorde/10) % 7;
    quinta = acorde%7;

    /*Dó - 0 // Ré - 1 // Mi - 2 // Fá - 3 // Sol - 4 // Lá - 5 // Si - 6 
    Ré: Tônica - Ré, Terça - Fá, Quinta - Lá
    Mi: Tônica - Mi, Terça - Sol, Quinta - Si
    Fá: Tônica - Fá, Terça - Lá, Quinta - Dó
    Sol: Tônica - Sol, Terça - Si, Quinta - Ré
    Lá: Tônica - Lá, Terça - Dó, Quinta - Mi
    Si: Tônica - Si, Terça - Ré, Quinta - Fá*/


    switch(tonica){

        case 0:
            if(terca == 2 && quinta == 4){
                printf("Acorde do satisfaz");
                descobriAcorde = 1;
            }
            
        break;

        case 1:
            if(terca == 3 && quinta == 5){
                printf("Acorde re satisfaz");
                descobriAcorde = 1;    
            }

        break;

        case 2:
            if(terca == 4 && quinta == 6){
                printf("Acorde mi satisfaz");
                descobriAcorde = 1;
            }
        break;

        case 3:
            if(terca == 5 && quinta == 0){
                printf("Acorde fa satisfaz");
                descobriAcorde = 1;
            } 
        break;

        case 4:
            if(terca == 6 && quinta == 1){
                printf("Acorde sol satisfaz");
                descobriAcorde = 1;
            } 
        break;

        case 5:
            if(terca == 0 && quinta == 2){
                printf("Acorde la satisfaz");
                descobriAcorde = 1;
            } 
        break;

        case 6:
            if(terca == 1 && quinta == 3){
                printf("Acorde si satisfaz");
                descobriAcorde = 1;
            } 
        break;

        default:
        break;
    }
    if(descobriAcorde == 0){
        printf("Combinacao nao satisfaz.");
    }

    return 0;
}