//login:sna2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct el_lista{
    int valor;
     struct el_lista *proximo; 
};


int main(){

    struct el_lista *ptr = NULL;
    int qtd = 0, i;
    struct el_lista temp;
   
    

    while(scanf("%d", &temp.valor) && (temp.valor != 0)){
        
        ptr = ( struct el_lista *) realloc(ptr, (qtd + 1) * sizeof(struct el_lista));
            
            if( ptr == NULL){
                printf("Erro ao alocar\n");
                exit(-1);
            }


        ptr[qtd].valor = temp.valor;
        ptr[qtd].proximo = NULL;
        qtd++;

        if( qtd > 1){
            temp.proximo  = ptr[qtd - 1].valor;
            ptr[qtd - 2].proximo = temp.proximo;
        }
    }
    
    
    for(i = 0; i < qtd; i++){
        printf("VALOR %d = %d\n", i, ptr[i].valor);
        printf("%p\n", ptr[i].valor);
        printf("Endereco: %p\n\n", ptr[i].proximo);
    }

    for( i = 0; i < qtd; i++){
        free(ptr[i].proximo);
    }

    free(ptr);

    return 0;

}