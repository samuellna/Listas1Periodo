// Aluno: Samuel Nunes de Andrade - Login: sna2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    /* QUESTAO 1:

        char c = 'a';
        char *pc;
        pc = &c;

        a) printf("Endereco de C: %p\t-\tValor de C: %c\n", c, c);
        b) printf("Valor do ponteiro: %c\t-\tValor do endereco que o ponteiro aponta: %c\n", pc, (*pc));
        c) printf("Endereco de pc: %p", pc);
        d) printf("Endereco: %p\nValor guardado no endereco: %p\n", &*pc, *&pc);
           Explicacao:
           Desreferenciacao eh acessar o valor que esta contido no endereco que o ponteiro aponta.
        //E)
            Os dois enderecos impressos sao iguais, pois quando usamos "&", queremos mostrar o endereço de uma variável, ja quando usamos o "*" num ponteiro, queremos indicar o valor do endereco que aquele ponteiro guarda (o "*" e o "&" sao complementos um do outro), logo, se usarmos "&*[variavel]", estaremos indicando o endereco que o valor do ponteiro aponta, portanto, "&*pc" eh a mesma coisa de "&c".
    */
                            
    
    
    /*QUESTAO 2:

        Declarando o vetor:
        int vet[5] = {1, 2, 3, 4, 5};
        int *p = vet;
        int i = 0;

        a) printf("Endereco de vet: %p\nEndereco guardado em p: %p", vet, p);

        b)  for(i = 0; i < 5; i++){
                printf("Valor de vet com p[%d]: %d\n", i+1, p[i]);
            }

        c)  for(i = 0; i < 5; i++){
                printf("Valor [%d] de vet com (*p): %d\n", i+1, (*p));
                p++;
            }

        d)  for(i = 0; i < 5; i++){
                printf("Valor de vet[%d]: %d\n", i+1, vet[i]);
            }

    */
    
    /*QUESTAO 3:
        Letra a:
            #include <stdio.h>
            #include <string.h>
            int main(void){
                char str[50]; // String
                char str_inv[50] = {}; // String invertida

                char *ptr_str = str; // Ponteiro da string
                char *ptr_inv = str_inv; // Ponteiro da string invertida

                int i=-1;
                
                scanf(" %s", str);

                while(*(ptr_str) != '\0'){
                    ptr_str++;
                    i--;
                }
                while(i){
                    (*ptr_inv) = *(ptr_str - 1);
                    ptr_inv++;
                    ptr_str--;
                    i++;
                }
                printf(" O inverso da string : %s\n\n", str_inv);
                return 0;
            }
        Letra b:
            Nao e necessario por o "&" pois string inversa recebe os valores diretamente do ponteiro, e na hora de printar os valores que uma variavel comum guarda, nao colocamos o "&".
    */

    /*QUESTAO 4:
        #include <stdio.h>
        #include <string.h>

        int main(void){
            int tam_matriz;
            scanf("%d", tam_matriz);

            char string[tam_matriz];
            char *ptr_string = &str[tam_matriz]; 
            char **ptr_duplo = &ptr;
            int i = 0, j = 0;
                        
            ptr_duplo= (int**) malloc(tam_matriz * sizeof(char));
            for(i = 0; i < tam_matriz; i++){
                ptrduplo[i] = (int *) malloc(N * sizeof(char));
                for(j = 0; j < N; j++)
                scanf(" %s", **ptr_duplo);
            }
            return 0;
        }
    */


    return 0;
}