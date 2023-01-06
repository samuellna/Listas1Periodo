#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, i, j, k, g, div = 0, divAux = 0, primoAnterior = 0, primoSucessor = 0, primosZeca = 0;

    //2 < A < B <= 2000
    scanf("%d %d", &a, &b);

    for(i = a; i <= b; i++){

        div = 0;
        divAux = 0;
        primoAnterior = 0;
        primoSucessor = 0;

        for( j = 1; j <= i; j++){
            if( i % j == 0){
                div++;
            }
        }

        if(div == 2){

            //Nesse la�o iremos achar o primo sucessor
            for(k = i +1; k <= 2*i; k++){

                divAux = 0;
                
                for( g = 1; g <= k; g++){
                    if( k % g == 0){
                        divAux++;
                    }
                }
                

                if( divAux == 2){
                    primoSucessor = k;
                    //k = 2*i + 1;
                    break;
                }


            }

            //Nesse laco iremos achar o primo anterior
            for(k = i-1; k <= 2*i; k--){

                divAux = 0;

                for( g = 1; g <= k; g++){
                    if( k % g == 0){
                        divAux++;
                    }
                }

                if( divAux == 2){
                    primoAnterior = k;
                    //k = 2*i + 1;
                    break;
                }
            }

            if( primoAnterior + primoSucessor == 2 * i){
                primosZeca++;
            }
        }
    }

    printf("%d", primosZeca);

    return 0;
}