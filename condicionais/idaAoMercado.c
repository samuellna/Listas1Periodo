#include <stdio.h>

int main(void){
    int laranja, banana, ovo, mlLeite, laranjaAux = 0, bananaAux = 0, ovoAux = 0, mlAux = 0;

    scanf("%d %d %d %d", &laranja, &banana, &ovo, &mlLeite);
     
    if (laranja < 0 || banana < 0 || ovo < 0 || mlLeite < 0) printf("lurn maf :(\n");
    else{
        if(laranja == 0){
            laranjaAux = banana * banana;
            if(laranjaAux > 0){
                bananaAux = 2;
            }
        }
        if(banana + bananaAux > ovo){
        
            if(laranjaAux >= ovo){
                ovoAux = laranjaAux - ovo;
            }
            if(ovoAux > 0 && mlLeite < 2000){
                mlAux = 2000 - mlLeite;
            }
            if(laranjaAux < ovo){
                ovoAux = 0;
            }
        }
        
        if(ovoAux ==0){
            mlAux = 500;
        }
        printf("%d laranjas\n%d bananas\n%d ovos\n%d mL de leite", laranjaAux, bananaAux, ovoAux, mlAux);
    }
    
    return 0;
}