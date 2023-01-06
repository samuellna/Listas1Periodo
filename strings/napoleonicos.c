#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    char texto [501], matriz [500][501];
	int tamMatriz = 0, tamLinha = 0, tamTexto;
    int i = 0, j = 0; //contador auxiliar impressao
    char *pt; // ponteiro para receber enderecos dos tokens
    char letra; // variavel auxiliar para conversao do codigo ascii em letra
    long int num; // variavel auxiliar para converter string em numero
    char *pt1;
	int maiusculo = 0, minusculo = 0, total, codifica = 0;
   
    scanf (" %500[^\n]", &texto);

    tamTexto = strlen (texto);
    codifica = 0;

    for(i = 0; i < tamTexto; i++){
        if(texto[i] == '['){
            codifica = 1;
        }
        else{
            if(texto[i] == ']'){
                codifica = 0;
            }
        }
        if (texto[i] == '-' && codifica == 0){
            texto[i] = '@';
        }
    }

    pt = strtok(texto, "[-"); // nao considero o ] para solucionar caso de dois codigos seguidos, entï¿½o ele fica para separar. sera tirado na impressao
   
    while(pt){
        strcpy (matriz[i], pt);
        i++;
        pt = strtok (NULL, "[-");
    }
   
    tamMatriz = i;
   
    for (i = 0; i < tamMatriz; i++){
        if ((matriz[i][0] >= '0') && (matriz[i][0] <= '9') ) {
            num = strtol(matriz[i], &pt1,10);
            if (num>=65 && num<=90){
                maiusculo++;
            }
            else{
                minusculo++;
            }
            letra = num;
            matriz[i][0]=letra;
            matriz[i][1]=NULL;
            matriz[i][2]=NULL;
        }
        else{
            total = maiusculo+minusculo;
            if(maiusculo > minusculo){
                for(j = i - total; j < i; j++){
                    matriz[j][0] = toupper(matriz[j][0]);
                }
            }
            else{
                for(j = i - total; j < i; j++){
                    matriz[j][0] = tolower(matriz[j][0]);
                }                
            }
            maiusculo=0;
            minusculo=0;
        }
    }
    
    total=maiusculo+minusculo;
    
    if (total != 0){
        if (maiusculo > minusculo) {
            for (j= i - total; j < i; j++){
                matriz[j][0] = toupper(matriz[j][0]);
            }
        }
        else{
            for (j = i - total; j < i; j++){
                matriz[j][0] = tolower(matriz[j][0]);
            }                
        }
    }    
   
    for (i = 0; i < tamMatriz; i ++) {
        tamLinha = strlen (matriz[i]);  
        for (j = 0; j < tamLinha; j++) {
            // restaura o traco que nï¿½o era delimitados de ascii
            if (matriz[i][j] == '@'){
               matriz[i][j] = '-';
            }
            if (matriz[i][j] != ']') {  
               printf ("%c", matriz[i][j]);
            }
        }  
    }
   
   
return 0;
}

