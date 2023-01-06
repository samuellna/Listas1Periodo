#include <stdio.h>

int main(){
    int num1, num2, num3;

    //printf("Entre com os 3 inteiros:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 == num2 && num1*num1 == num3){
        printf("Quadrado Vitoris\n");

        if((num1 == num2 && num1*num1 == num3) && (num1 * num2 == num3)){
            printf("tambem Multi\n");
        }
        if((num1 == num2 && num1*num1 == num3) && (num1 + num2 == num3)){
            printf("tambem Soma\n");
        }
        if((num1 == num2 && num1*num1 == num3) && (num1/num2 == num3)){
            printf("tambem Div\n");
        }
    }

    else if(num1 % num2 == num3){
        printf("Resto Vitoris\n");

        if((num1 % num2 == num3) && (num1 * num2 == num3)){
            printf("tambem Multi\n");
        }
        
        if((num1 % num2 == num3) && (num1/num2 == num3)){
            printf("tambem Div\n");
        }

        if((num1 % num2 == num3) && (num1 - num2 == num3)){
            printf("tambem Sub\n");
        }
        
    }
    
    else if(num1 * num2 == num3){
        printf("Multi Vitoris\n");

        if((num1 * num2 == num3) && (num1 + num2 == num3)){
            printf("tambem Soma\n");
        }
        
        if((num1 * num2 == num3) && (num1 / num2 == num3)){
            printf("tambem Div\n");
        }
        
        if((num1 * num2 == num3) && (num1 - num2 == num3)){
            printf("tambem Sub\n");
        }
    }
    
    else if(num1/num2 == num3){
        printf("Div Vitoris\n");
        
        if((num1/num2 == num3) && (num1 - num2 == num3)){
            printf("tambem Sub\n");
        }
        
    }

    else if(num1 + num2 == num3){
        printf("Soma Vitoris\n");

        if((num1 + num2 == num3) && (num1 - num2 == num3)){
            printf("tambem Sub\n");
        }
    }

    else if(num1 - num2 == num3){
        printf("Sub Vitoris\n");
    }

    else{
        printf("Impossivel vitores\n");
    }

    return 0;
}