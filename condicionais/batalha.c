#include <stdio.h>

int main() {

    int soldados, tanques, avioes, lancaM;
    int soldadosI, tanquesI, avioesI, lancaI;
    int soldadosI2, tanquesI2, avioesI2, lancaI2;

    scanf("%i %i %i %i %i %i %i %i %i %i %i %i", & soldados, & tanques, &
    avioes, & lancaM, & soldadosI, & tanquesI, & avioesI, & lancaI, & soldadosI2, &
    tanquesI2, & avioesI2, & lancaI2);
        
    int aliados, inimigos, inimigosRef;
    
    aliados = soldados + tanques + avioes + lancaM;
    inimigos = soldadosI + tanquesI + avioesI + lancaI;
    inimigosRef = soldadosI2 + tanquesI2 + avioesI2 + lancaI2;

    if (aliados > inimigos + inimigosRef*2)  printf("Avancar");

    else if (aliados < inimigos + inimigosRef) printf("Recuar");
    
    else  printf("Permanecer");

  return 0;
}