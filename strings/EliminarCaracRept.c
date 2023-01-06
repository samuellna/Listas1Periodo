#include <stdio.h>
int main(void){
    char string[25], stringAux[24] = {};
    scanf(" %[^\n]", string);
    unsigned int i = 0, j = 0;
    while(string[i] != '\0'){
        if(string[i] != string[i + 1]){
            stringAux[j] = string[i];
            j++;
        }
        i++;
    }
    printf("%s", stringAux);
    return 0;
}