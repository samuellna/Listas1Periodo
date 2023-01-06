#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string[] = "Exemplo aqui";
    int string_size = strlen(string), to_delete;

    // Selecione o index do caracter a deletar
    to_delete = 3; // Aqui deletariamos o caracter 3 equivalente ao m

    for(int i = to_delete; i < string_size; i++){
        string[i] = string[i+1];
    }

    // Coloque o /0 para sinalizar o novo fim da string
    string[string_size - 1] = '\0';

    return 0;
}