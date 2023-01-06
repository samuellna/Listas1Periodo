#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}struct_data;

int main(void){

    struct_data data;
    int dias_add, aux;
    // Armazenando os valores
    scanf("%d", &data.dia);
    scanf("%d", &data.mes);
    scanf("%d", &data.ano);  
    scanf("%d", &dias_add);

    while(dias_add > 0){
        switch(data.mes){
            case 1:
                aux = 31 - data.dia;
                if(dias_add < aux){
                    data.dia += dias_add;
                    dias_add = 0;
                } 
                else{
                    data.dia += aux;
                    dias_add -= aux;
                    if(dias_add > 0){
                        data.dia -= 30;
                        data.mes++;
                        dias_add--;
                    }
                }
            break;
            
            case 2:
                if(data.ano % 400 == 0 || (data.ano % 4 == 0 && data.ano % 100 != 0)){
                    aux = 29 - data.dia;
                    if(dias_add < aux){
                        data.dia += dias_add;
                        dias_add = 0;
                    } 
                    else{
                        data.dia += aux;
                        dias_add -= aux;
                        if(dias_add > 0){
                            data.dia -= 28;
                            data.mes++;
                            dias_add--;
                        }
                    }
                }
                else{
                    aux = 28 - data.dia;
                    if(dias_add < aux){
                        data.dia += dias_add;
                        dias_add = 0;
                    } 
                    else{
                        data.dia += aux;
                        dias_add -= aux;
                        if(dias_add > 0){
                            data.dia -= 27;
                            data.mes++;
                            dias_add--;
                        }
                    }
                }
            break;

            case 3:
                aux = 31 - data.dia;
                if(dias_add < aux){
                    data.dia += dias_add;
                    dias_add = 0;
                } 
                else{
                    data.dia += aux;
                    dias_add -= aux;
                    if(dias_add > 0){
                        data.dia -= 30;
                        data.mes++;
                        dias_add--;
                    }
                }
            break;

            case 4:
                aux = 30 - data.dia;
                if(dias_add < aux){
                    data.dia += dias_add;
                    dias_add = 0;
                } 
                else{
                    data.dia += aux;
                    dias_add -= aux;
                    if(dias_add > 0){
                        data.dia -= 29;
                        data.mes++;
                        dias_add--;
                    }
                }
            break;

            case 5:
                aux = 31 - data.dia;
                if(dias_add < aux){
                    data.dia += dias_add;
                    dias_add = 0;
                } 
                else{
                    data.dia += aux;
                    dias_add -= aux;
                    if(dias_add > 0){
                        data.dia -= 30;
                        data.mes++;
                        dias_add--;
                    }
                }
            break;

            case 6:
                aux = 30 - data.dia;
                if(dias_add < aux){
                    data.dia += dias_add;
                    dias_add = 0;
                } 
                else{
                    data.dia += aux;
                    dias_add -= aux;
                    if(dias_add > 0){
                        data.dia -= 29;
                        data.mes++;
                        dias_add--;
                    }
                }
            break;

            case 7:
                aux = 31 - data.dia;
                if(dias_add < aux){
                    data.dia += dias_add;
                    dias_add = 0;
                } 
                else{
                    data.dia += aux;
                    dias_add -= aux;
                    if(dias_add > 0){
                        data.dia -= 30;
                        data.mes++;
                        dias_add--;
                    }
                }
            break;

            case 8:
                aux = 31 - data.dia;
                if(dias_add < aux){
                    data.dia += dias_add;
                    dias_add = 0;
                } 
                else{
                    data.dia += aux;
                    dias_add -= aux;
                    if(dias_add > 0){
                        data.dia -= 30;
                        data.mes++;
                        dias_add--;
                    }
                }
            break;

            case 9:
                aux = 30 - data.dia;
                if(dias_add < aux){
                    data.dia += dias_add;
                    dias_add = 0;
                } 
                else{
                    data.dia += aux;
                    dias_add -= aux;
                    if(dias_add > 0){
                        data.dia -= 29;
                        data.mes++;
                        dias_add--;
                    }
                }
            break;

            case 10:
                aux = 31 - data.dia;
                if(dias_add < aux){
                    data.dia += dias_add;
                    dias_add = 0;
                } 
                else{
                    data.dia += aux;
                    dias_add -= aux;
                    if(dias_add > 0){
                        data.dia -= 30;
                        data.mes++;
                        dias_add--;
                    }
                }
            break;

            case 11:
                aux = 30 - data.dia;
                if(dias_add < aux){
                    data.dia += dias_add;
                    dias_add = 0;
                } 
                else{
                    data.dia += aux;
                    dias_add -= aux;
                    if(dias_add > 0){
                        data.dia -= 29;
                        data.mes++;
                        dias_add--;
                    }
                }
            break;

            case 12:
                aux = 31 - data.dia;
                if(dias_add < aux){
                    data.dia += dias_add;
                    dias_add = 0;
                } 
                else{
                    data.dia += aux;
                    dias_add -= aux;
                    if(dias_add > 0){
                        data.dia -= 30;
                        data.mes = 1;
                        data.ano++;
                        dias_add--;
                    }
                }
            break;
        }
    }
    printf("%d/%d/%d", data.dia, data.mes, data.ano);

    return 0;
}