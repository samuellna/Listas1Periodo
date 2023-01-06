#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 201
  
// Funcao para substituir uma string por outra
char* replaceGenerico(const char* s, const char* oldW, const char* newW){
    char* result;
    int i, cnt = 0;
    int newWlen = strlen(newW);
    int oldWlen = strlen(oldW);

    // Contando o numero de vezes que a palavra antiga
    // ocorrem na string
    for(i = 0; s[i] != '\0'; i++) {
        if(strstr(&s[i], oldW) == &s[i]) {
            cnt++;
            // Saltar para o i­ndice apÃ³s a palavra antiga.
            i += oldWlen - 1;
        }
    }

    // Criando uma nova string de tamanho suficiente
    result = (char*)malloc(i + cnt * (newWlen - oldWlen) + 1);
    
    //Zerando o contador para reutilizar ele
    i = 0;
    while(*s){
        // compara a substring com o resultado
        if (strstr(s, oldW) == s){
            strcpy(&result[i], newW);
            i += newWlen;
            s += oldWlen;
        }
        else result[i++] = (*s++);
    }
  
    result[i] = '\0';
    return result;
}
  
int main(void){
    char str[TAM];
    char velho[TAM];
    char novo[TAM];

    scanf(" %200[^\n]", str);
    scanf(" %200[^\n]", velho);
    scanf(" %200[^\n]", novo);

    char* result = NULL;

    // Pra printar a antiga string
    printf("Antiga string: %s\n", str);
  
    result = replaceGenerico(str, velho, novo);

    printf("Nova String: %s\n", result);
  
    free(result);
    return 0;
}