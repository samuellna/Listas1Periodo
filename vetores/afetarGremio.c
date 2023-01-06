#include <stdio.h>
#define QT 10
#define LIN 4
#define COL 6

int main(void){
    int formacao[LIN][COL], formacaoAux = 0, qtdFormacao, jogadoresATK[QT] = {0}, jogadoresDEF[QT] = {0}, jogadoresMEIO[QT] = {0}, qtdJogFoco[QT] = {0}, indexJogFoco = 0;
    char foco;

    scanf("%d %c", &qtdFormacao, &foco);

    while(formacaoAux != qtdFormacao){
        for(int i = 0; i < LIN; i++){
            for(int j = 0; j < COL; j++){
                scanf("%d", &formacao[i][j]);

                if(i == 1 && formacao[i][j] == 1) jogadoresATK[indexJogFoco]++; // Pegar a qtd de jogadores na posicao de ataque

                else if(i == 2 && formacao[i][j] == 1) jogadoresMEIO[indexJogFoco]++; // Pegar a qtd de jogadores na posicao do meio
                
                else if(i == 3 && formacao[i][j] == 1) jogadoresDEF[indexJogFoco]++; // Pegar a qtd de jogadores na posicao de defesa
            }
        }

        if(foco == 'A') qtdJogFoco[indexJogFoco] = jogadoresATK[indexJogFoco]; // Se o foco for ATK, entao a quantidade de jogadores a comparar eh a da linha de atk

        else if(foco == 'M') qtdJogFoco[indexJogFoco] = jogadoresMEIO[indexJogFoco]; //Se o foco for MEIO, entao a quantidade de jogadores a comparar eh a da linha de meio
        
        else if(foco == 'D') qtdJogFoco[indexJogFoco] = jogadoresDEF[indexJogFoco]; // Se o foco for DEF, entao a quantidade de jogadores a comparar eh a da linha de def
        
        //OBS: Criei esse vetor que fica ligado aos jogadores para manter os valores de cada formacao

        indexJogFoco++;
        formacaoAux++; // Incrementa a formacaoAux ate ela ser igual a qtdFormacao
    }

    for(int i = 0; i < qtdFormacao; i++){
        for(int j = i + 1; j < qtdFormacao; j++){

            if(qtdJogFoco[i] > qtdJogFoco[j]) printf("Pipi e Mariozito deviam escolher a formacao %d-%d-%d", jogadoresDEF[i], jogadoresMEIO[i], jogadoresATK[i]);
            
            else if(qtdJogFoco[i] < qtdJogFoco[j]) printf("Pipi e Mariozito deviam escolher a formacao %d-%d-%d", jogadoresDEF[j], jogadoresMEIO[j], jogadoresATK[j]);
            
            else printf("Pipi e Mariozito deviam escolher a formacao %d-%d-%d", jogadoresDEF[i], jogadoresMEIO[i], jogadoresATK[i]);
        }
    }

    return 0;
}