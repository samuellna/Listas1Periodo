#include <stdio.h>

int main(void){

    int menorNum, maiorNum, qtdFatores, existe = 0, fatprimosImpar = 0, flag = 0;

    scanf("%d %d %d", &menorNum, &maiorNum, &qtdFatores);

    for(int i = menorNum; i <= maiorNum; i++){
      int FatRepetidos=0;

        for(int j = 3; j < i; j += 2){
            int aux = i;
            if(aux%j == 0){
                int  divisores = 0;
                for(int k = 1; k <= j; k++){
                    if(j%k == 0) divisores++;
                }
                if(divisores == 2) {
                    fatprimosImpar++;
                    if(aux%(j*j)==0) FatRepetidos=1;
                }
            }
        }
        if(FatRepetidos==0 && fatprimosImpar == qtdFatores){
            existe++;
        }
        if(existe > 0 && flag == 0){
            printf("%d ", i);
            flag = 1;
        }
        fatprimosImpar = 0;
    }

    if(existe == 0) printf("Poxa dudinha, me desculpa, nao achei os numeros mas vou te mandar uma foto de um gatinho fofo.");
    else printf("%d", existe - 1); // EXISTE - 1 PARA EXCLUIR O NUMERO PRINTADO

    return 0;
}