#include <stdio.h>
#include <string.h>

typedef struct
{
    int id;
    char nome[51];
}Monitor;

typedef struct{
    int quest_1;
    int quest_2;
    int quest_3;
}Listas;


typedef struct{
    char nome[51];
    int id_mon;
    Listas lista[4];
    int pontuacao;
}Aluno;


int main(){
    Monitor lista[10];
    Aluno aluno[40];
    int num_Mon, num_Alunos, i, j, sorteada;

    scanf("%d", &num_Mon);

    for(i = 0; i < num_Mon; i++){
        scanf(" %s", lista[i].nome);
        scanf("%d", &lista[i].id);
    }

    scanf("%d", &num_Alunos);

    for(i = 0; i < num_Alunos; i++){
        scanf(" %s", aluno[i].nome);
        scanf("%d", &aluno[i].id_mon);
        aluno[i].pontuacao = 0;
    }

    for(i = 0; i < num_Alunos; i++){
        for( j = 1; j < 4; j++){
            scanf("%d", &aluno[i].lista[j].quest_1);
            scanf("%d", &aluno[i].lista[j].quest_2);
            scanf("%d", &aluno[i].lista[j].quest_3);
        }
    }

    for(i = 0; i < num_Alunos; i++){
        for( j = 1; j < 4; j++){
            if(aluno[i].lista[j].quest_1 == 1){
                aluno[i].pontuacao++;
            }
            if(aluno[i].lista[j].quest_2 == 1){
                aluno[i].pontuacao++;
            }
            if(aluno[i].lista[j].quest_3 == 1){
                aluno[i].pontuacao++;
            }
        }
        
    }

    scanf("%d", &sorteada);

    for(i = 0; i < num_Alunos; i++){
        for( j = 1; j < 4; j++){
            if((j == sorteada) && (aluno[i].lista[j].quest_3 == 1)){
                aluno[i].pontuacao++;
            }
        }
        
    }

    for(i = 0; i < num_Alunos; i++){
       printf("%s\n", aluno[i].nome);

       for (j = 0; j < num_Mon; j++){
           if(aluno[i].id_mon == lista[j].id){
               printf("%s\n", lista[j].nome);
               j = num_Mon;
            }
        }

       printf("%d\n", aluno[i].pontuacao);
       
        
    }

    return 0;
}