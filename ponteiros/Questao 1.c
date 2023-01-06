//login: sna2

#include <stdio.h>
#include <stdlib.h>

int main(){

//  QUESTAO 1:

    char c = 'a';
    char *pc = &c;

//A)
    printf("Endereco de c: %p\nValor de c: %c\n", &c, c);
//B)
    printf("Valor de pc: %c\nValor de *pc: %c\n",  pc, *pc);
//C)
    printf("Endereco de pc: %p\n", &pc);
//D)
    printf("Endereco: %p\nValor guardado no endereco: %c\n", &*pc, *pc);
    /*EXPLICACAO:
        Desreferenciacao eh acessar o valor que esta contido no endereco que o ponteiro aponta.*/

//E)
    /*Os dois enderecos impressos sao iguais, pois quando usamos "&", queremos demonstrar o endereço de uma variável, quando usamos o "*" num ponteiro, queremos indicar o valor do endereco que aquele ponteiro guarda, logo, se usarmos "&*[variavel]", estaremos indicando o endereco que o valor do ponteiro aponta, portanto, "&*pc" eh a mesma coisa de "&c".*/

    return 0;
}