//login: sna2

#include <stdio.h>
#include <string.h>

int main(){

    char str[50] = {0}; // String
    char str_inv[50] = {0}; // String invertida
    char *ptr_str = str;
    char *ptr_inv = str_inv;
    int i=-1;

    scanf(" %s", str);

    while(*(ptr_str) != '\0'){
        i--;
        ptr_str++;
    }

    while(i != 0){
        *(ptr_inv) = *(ptr_str - 1);
        ptr_str--;
        ptr_inv++;
        i++;
    }

    *ptr_inv = '\0';

    printf("O inverso da string : %s\n\n",str_inv);

    /*B) Como "str_inv" eh uma string e strings sao acessadas atraves de um ponteiro para seu primeiro caractere (como arrays); elas sao praticamente ponteiros.
    Logo, o "&" nao faz falta dentro do scanf.*/

    return 0;
}