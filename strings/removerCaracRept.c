#include <stdio.h>
#include <string.h>
#define TAM 18

int main(void){
    char string[TAM];
    scanf(" %s", string);
    int i = 0;
    for(int i = 0; i < strlen(string); i++){
        for(int j = i + 1; j < strlen(string); j++){
            if(string[i] == string[j]){
                string[j] = string[j+1];
            }
        }
    }

    printf("%s", string);

    return 0;
}