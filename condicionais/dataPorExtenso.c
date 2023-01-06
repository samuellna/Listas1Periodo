#include <stdio.h>
#include <math.h>

int main(void){
    
    int dia, mes;
    scanf("%d", &dia);
    scanf("%d", &mes);
    
    if(dia == 1 || dia == 8 || dia == 15 || dia == 22 || dia == 29) printf("domingo, %d", dia);
    else if(dia == 2 || dia == 9 || dia == 16 || dia == 23 || dia == 30) printf("segunda, %d", dia);
    else if(dia == 3 || dia == 10 || dia == 17 || dia == 24 || dia == 31) printf("terca, %d", dia);
    else if(dia == 4 || dia == 11 || dia == 18 || dia == 25) printf("quarta, %d", dia);
    else if(dia == 5 || dia == 12 || dia == 19 || dia == 26) printf("quinta, %d", dia); 
    else if(dia == 6 || dia == 13 || dia == 20 || dia == 27) printf("sexta, %d", dia);
    else if(dia == 7 || dia == 14 || dia == 21 || dia == 28) printf("sabado, %d", dia);
    
    switch(mes){
        case 1:
            printf(" de janeiro");
        break;
        
        case 2:
            printf(" de fevereiro");
        break;
        
        case 3:
            printf(" de marco");
        break;
        
        case 4:
            printf(" de abril");
        break;
        
        case 5:
            printf(" de maio");
        break;
        
        case 6:
            printf(" de junho");
        break;
        
        case 7:
            printf(" de julho");
        break;
        
        case 8:
            printf(" de agosto");
        break;
        
        case 9:
            printf(" de setembro");
        break;
        
        case 10:
            printf(" de outubro");
        break;
        
        case 11:
            printf(" de novembro");
        break;
        
        case 12:
            printf(" de dezembro");
        break;
        
    }
    return 0;
}