#include <stdio.h>
int main(void){

    int opc1, opc2, quociente;
    float ml1, ml1Aux, ml2, ml2Aux, din, preco1, preco2, precoF;

    printf("Qual a 1a opcao? ");
    scanf("%d", &opc1);

    printf("Qual a 2a opcao? ");
    scanf("%d", &opc2);

    printf("Quantos mL tem o 1o shake? ");
    scanf("%f", &ml1);
    ml1Aux = ml1/100;
    
    printf("Quantos mL tem o 2o shake? ");
    scanf("%f", &ml2);
    ml2Aux = ml2/100;

    switch (opc1){
    case 1:
        if(ml1 <= 500){
            preco1 = (190.0 * ml1Aux)/100.0;
        }
        else{
            preco1 = (180.0 * ml1Aux)/100.0;
        }
    break;
    
    case 2:
        if(ml1 <= 500){
            preco1 = (291.0 * ml1Aux)/100.0;
        }
        else{
            preco1 = (282.0 * ml1Aux)/100.0;
        }
    break;
    
    case 3:
        if(ml1 <= 500){
            preco1 = (384.0 * ml1Aux)/100.0;
        }
        else{
            preco1 = (368.0 * ml1Aux)/100.0;
        }
    break;
    
    default:
        break;
    }

    switch (opc2){
    case 1:
        if(ml2 <= 500){
            preco2 = (190.0 * ml2Aux)/100.0;
        }
        else{
            preco2 = (180.0 * ml2Aux)/100.0;
        }
    break;
    
    case 2:
        if(ml2 <= 500){
            preco2 =  (291.0 * ml2Aux)/100.0;
        }
        else{
            preco2 = (282.0 * ml2Aux)/100.0;
        }
    break;
    
    case 3:
        if(ml2 <= 500){
            preco2 = (384.0 * ml2Aux)/100.0;
        }
        else{
            preco2 = (368.0 * ml2Aux)/100.0;
        }
    break;
    
    default:
    break;
    }

    precoF = preco1 + preco2;
    
    printf("Digite o dinheiro que vc tem: ");
    scanf("%f", &din);

    if(din >= precoF){
        quociente = din/precoF;
        if(quociente >= 2){
            printf("Yeah! Shake %d vezes mais.\n", quociente);
        }
        else{
            printf("De qualquer forma matamos nossa sede de shake.\n");
        }
    }
    else{
        printf("Carambolas! O shake JA ERA.\n");
    }

    return 0;
}