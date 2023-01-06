#include <stdio.h>

int main() {
  int dia, mes, ano;

  scanf("%d %d %d", & dia, & mes, & ano);
  
  if(dia>=32 || mes>=13 || ano>=2101 || ano<=1899){
      printf("invalida\n");
  }
  else if (mes == 1 && dia>=1 && dia <= 31) {
    printf("valida\n");
  }
  else if(mes == 2 && dia>=1 && dia<=28){
    printf("valida\n");
  }
  else if (mes == 2 && (ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0)) && dia>=1 && dia<=29){
    printf("valida\n");
  }
  else if (mes == 3 && dia>=1 && dia <= 31) {
    printf("valida\n");
  }
  else if (mes == 4 && dia>=1 && dia <= 30) {
    printf("valida\n");
  }
  else if (mes == 5 && dia>=1 && dia <= 31) {
    printf("valida\n");
  }
  else if (mes == 6 && dia>=1 && dia <= 30) {
    printf("valida\n");
  }
  else if (mes == 7 && dia>=1 && dia <= 31) {
    printf("valida\n");
  }
  else if (mes == 8 && dia>=1 && dia <= 31) {
    printf("valida\n");
  }
  else if (mes == 9 && dia>=1 && dia <= 30) {
    printf("valida\n");
  }
  else if (mes == 10 && dia>=1 && dia <= 31) {
    printf("valida\n");
  }
  else if (mes == 11 && dia>=1 && dia <= 30) {
    printf("valida\n");
  }
  else if (mes == 12 && dia>=1 && dia <= 31) {
    printf("valida\n");
  }
  else {
    printf("invalida\n");
  }
  return 0;
}