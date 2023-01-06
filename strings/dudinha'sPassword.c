#include <stdio.h>
#include <string.h>

int main(void){   
    
	char comando, string[7] = {0}, string1[13] = {0}, string2[120] = {0}, string3[31] = {0}, string4[120] = {0};
	int numComandos = 0, i = 0, qtdVezes = 0, z = 0, k = 0, aux = 0;

    scanf("%d", &numComandos);

	for(i = 0; i < numComandos && i <= 19; i++){
    	scanf(" %c %s", &comando, string1);
		if(i == 0){ 
			if(comando == 'd'){
				for(z = 0; z <= 5; z++){
					string2[z] = string1[z];
				}
			}		
			else if(comando == 'e'){
				for(z = 0, k = 11; z <= 5 ; z++, k--){
					string2[z] = string1[k];
				}
			}	
		}
		if(i > 0){ 
			if(comando == 'd'){
				for(z = 0; z <= 5; z++){
					string[z]=string1[z];
				}
				strcat(string2, string);
			} 
			if(comando == 'e'){
				for(z = 0, k = 11; z <= 5; z++, k--){
					string[z] = string1[k];
				}
				strcat(string2, string); 
        	} 
      	}
    }

	scanf(" %s", string3);  
	
	for(i = numComandos * 6; i < (numComandos * 6) - 1 + strlen(string3); i++){
		string2[i] = string2[i - (numComandos * 6)];
	}
		
	for(i = 0, z = 0; i < (numComandos * 6) - 1 + strlen(string3); i++){
		if(string2[i] != string3[z]){
        	aux=0, z = 0;
        }
		if(string2[i] == string3[z]){
			z++, aux++;
			if(aux == strlen(string3)){	 
        	    qtdVezes++, aux = 0, z = 0; 
        	} 
        }
    }

	for(i = 0, z = (numComandos*6)-2 + strlen(string3); i < (numComandos*6) + strlen(string3); i++, z--){
		string4[i] = string2[z];
	}
		
	for(i = 0, z = 0; i < (numComandos * 6) + strlen(string3) - 1; i++ ){
		if(string4[i] != string3[z]){
	        aux = 0, z = 0; 
        }
		if(string4[i] == string3[z]){	
            z++, aux++;
			if(aux == strlen(string3)){ 
            	qtdVezes++, aux = 0, z = 0;
        	}
      	} 
    }

	printf("%s%d", string3, qtdVezes); 

	return 0; 
}