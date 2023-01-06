#include <stdio.h>

int main() {
    int moedas;
    int valVerde, valVermelho, valRoxo, valAmarelo;
    int velverd = 80, velverm = 100, velrox = 120, velamar = 80;
    int custoBenVer, custoBenVerm, custoBenRoxo, custoBenAmar;
    
    scanf("%d %d %d %d %d", & moedas, & valVerde, & valVermelho, & valRoxo, & valAmarelo);
    
    custoBenVer = velverd / valVerde;
    custoBenVerm = velverm / valVermelho;
    custoBenRoxo = velrox / valRoxo;
    custoBenAmar = velamar / valAmarelo;
    
    if (moedas < valVerde && valVermelho && valRoxo && valAmarelo)  printf("Acho que vou a pe :(");
    else if (custoBenVer >= custoBenVerm && custoBenVer >= custoBenRoxo && custoBenVer >= custoBenAmar)  printf("Verde");
    else if (custoBenVerm > custoBenVer && custoBenVerm >= custoBenRoxo && custoBenAmar)  printf("Vermelho");
    else if (custoBenRoxo > custoBenVerm && custoBenVer && custoBenRoxo >= custoBenAmar)  printf("Roxo");
    else  printf("Amarelo");

  return 0;
}