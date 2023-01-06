#include <stdio.h>
#include <math.h>
#define EXP 2.718281828
int main(void){
    float expo, numTermos, numerador = 0, expNumerador = 1, base = 2, fatorial = 1, fracao = 1,
    exponencialVal;
    
    scanf("%f", &expo);
    scanf("%f", &numTermos);
    
    for(int i = 0; i < numTermos - 1; i++){
        
        numerador = pow(expo, expNumerador);
        
        for(int j = base - 1; j >= 1; j--){
            fatorial *= j;
        }
        
        fracao += numerador/fatorial;
        base += 1;
        fatorial = 1.0; 
        
        expNumerador++;
    }
    
    exponencialVal = pow(EXP, expo);
    
    printf("%.3f\n", fracao);
    
    if(fracao/exponencialVal <= 0.9){
        printf("A aproximacao foi pouco precisa\n");
    }
    else if((fracao/exponencialVal) > 0.9 && (fracao/exponencialVal) <= 0.99){
        printf("A aproximacao foi muito precisa\n");
    }
    else if ((fracao/exponencialVal) > 0.99 && (fracao/exponencialVal) <= 1.0){
        printf("Os valores sao praticamente iguais\n");
    }
    
    return 0;
}