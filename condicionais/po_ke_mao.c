#include <stdio.h>

int main() {

  int numDoces;
  int docesEvol1;
  int docesEvol2;
  int docesEvol3;

  scanf("%d %d %d %d", & numDoces, & docesEvol1, & docesEvol2, & docesEvol3);

  int soma = docesEvol1 + docesEvol2;
  int soma2 = docesEvol2 + docesEvol3;
  int soma3 = docesEvol3 + docesEvol1;
  int somaTotal = docesEvol1 + docesEvol2 + docesEvol3;

  if (numDoces >= somaTotal) {
    printf("3");
  } else if (numDoces >= soma || numDoces >= soma2 || numDoces >= soma3) {
    printf("2");
  } else if (numDoces >= docesEvol1 || docesEvol2 || docesEvol3) {
    printf("1");
  }

  return 0;
}