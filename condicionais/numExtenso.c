#include <stdio.h>

int main(void){

    int numero, milhar, centena, dezena, unidade;
    
    scanf("%d", &numero);

    milhar = numero/1000;
    centena = (numero%1000)/100;
    dezena = (numero%100)/10;
    unidade = numero%10;

    if(milhar){
        switch(milhar){
            case 1: 
                printf("mil "); 
            break;
            case 2: 
                printf("dois mil ");
            break;
            case 3: 
                printf("tres mil ");
            break;
            case 4: 
                printf("quatro mil ");
            break;
            case 5: 
                printf("cinco mil ");
            break;
            case 6: 
                printf("seis mil ");
            break;
            case 7: 
                printf("sete mil ");
            break;
            case 8: 
                printf("oito mil ");
            break;
            case 9: 
                printf("nove mil ");
            break;
            case 10: 
                printf("dez mil ");
            break;
        }
    }
    if(centena != 0){
        switch(centena){
            case 1:
                if(dezena >= 1 || unidade >= 1) printf("cento ");
                else printf("e cem");
            break;
            case 2:
                if(dezena >= 1 || unidade >= 1) printf("duzentos ");
                else printf("e duzentos");
            break;
            case 3:
                if(dezena >= 1 || unidade >= 1) printf("trezentos ");
                else printf("e trezentos");
            break;
            case 4:
                if(dezena >= 1 || unidade >= 1) printf("quatrocentos ");
                else printf("e quatrocentos");
            break;
            case 5:
                if(dezena >= 1 || unidade >= 1) printf("quinhentos ");
                else printf("e quinhentos");
            break;
            case 6:
                if(dezena >= 1 || unidade >= 1) printf("seiscentos ");
                else printf("e seiscentos");
            break;
            case 7:
                if(dezena >= 1 || unidade >= 1) printf("setecentos ");
            else printf("e setecentos");
            break;
            case 8:
                if(dezena >= 1 || unidade >= 1) printf("oitocentos ");
                else printf("e oitocentos");
            break;
            case 9:
                if(dezena >= 1 || unidade >= 1) printf("novecentos ");
                else printf("e novecentos");
            break;
        }
    }
    if(dezena != 0){
        if(milhar > 0 || centena > 0) printf("e ");
        switch(dezena){
            case 1:
                if (unidade > 0){
                    switch(unidade){
                        case 1: 
                            printf("onze");
                        break;
                        case 2: 
                            printf("doze");
                        break;
                        case 3: 
                            printf("treze");
                        break;
                        case 4: 
                            printf("quatorze");
                        break;
                        case 5: 
                            printf("quinze");
                        break;
                        case 6: 
                            printf("dezesseis");
                        break;
                        case 7: 
                            printf("dezessete");
                        break;
                        case 8: 
                            printf("dezoito");
                        break;
                        case 9: 
                            printf("dezenove");
                        break;
                    }
                } else printf("dez");
            break;
            case 2:
                printf("vinte ");
            break;
            case 3:
                printf("trinta ");
            break;
            case 4:
                printf("quarenta ");
            break;
            case 5:
                printf("cinquenta ");
            break;
            case 6:
                printf("sessenta ");
            break;
            case 7:
                printf("setenta ");
            break;
            case 8:
                printf("oitenta ");
            break;
            case 9:
               printf("noventa ");
            break;
        }
    }
    if(unidade !=0){
        switch(unidade){
            case 1:
                if(milhar == 0 && centena == 0 && dezena == 0) printf("um");
                else if(dezena != 1) printf("e um");
                
            break;
            case 2:
                if(milhar == 0 && centena == 0 && dezena == 0) printf("dois");
                else if(dezena != 1) printf("e dois");
                
            break;
            case 3:
                if(milhar == 0 && centena == 0 && dezena == 0) printf("tres");
                else if(dezena != 1) printf("e tres");
            break;
            case 4:
                if(milhar == 0 && centena == 0 && dezena == 0) printf("quatro");
                else if(dezena != 1) printf("e quatro");
            break;
            case 5:
                if(milhar == 0 && centena == 0 && dezena == 0) printf("cinco");
                else if(dezena != 1)printf("e cinco");
            break;
            case 6:
                if(milhar == 0 && centena == 0 && dezena == 0) printf("seis");
                else if(dezena != 1) printf("e seis");
            break;
            case 7:
                if(milhar == 0 && centena == 0 && dezena == 0) printf("sete");
                else if(dezena != 1) printf("e sete");
            break;
            case 8:
                if(milhar == 0 && centena == 0 && dezena == 0) printf("oito");
                else if(dezena != 1) printf("e oito");
            break;
            case 9:
                if(milhar == 0 && centena == 0 && dezena == 0) printf("nove");
                else if(dezena != 1) printf("e nove");
            break;
            
        }
    }

    if(numero == 0)printf("zero");

    return 0;
}