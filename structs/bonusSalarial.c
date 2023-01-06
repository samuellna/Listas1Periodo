#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 30

typedef struct{
char nome[40];
  float salario;
  int carga_horaria;
}funcionario;

int main(void){
  
  funcionario func[TAM];
  int i = 0, qtdF = 0;
  float bonus;

  while(scanf(" %[^\n]", func[i].nome) != EOF){
    scanf("%f", &func[i].salario);
    scanf("%d", &func[i].carga_horaria);
    i++;
    qtdF++;
  }

  for(i = 0; i < qtdF; i++){
    if(func[i].carga_horaria > 6 && func[i].carga_horaria <= 12){
      bonus = (func[i].carga_horaria * 0.1) / 12.0;
      func[i].salario += func[i].salario * bonus;
    }
    printf("%s - R$%.2f\n", func[i].nome, func[i].salario);
  }

  return 0;
} 