#include <stdio.h>

typedef struct{
    int dia, mes, ano;
}data;

int main(){
    data dataI, dataF;
    int diasI, diasF, diasDatas = 0;
    int i;

    scanf("%d/%d/%d\n%d/%d/%d", &dataI.dia, &dataI.mes, &dataI.ano, &dataF.dia, &dataF.mes, &dataF.ano);

    diasI = (dataI.mes*30) + dataI.dia;
    diasF = (dataF.mes*30) + dataF.dia;

    for(i = diasI; i <= diasF; i++){
        
    }

    printf("%d", diasDatas);
    //printf("%d/%d/%d\n%d/%d/%d", dataI, dataF);

    

    return 0;
}