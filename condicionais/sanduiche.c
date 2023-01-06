#include <stdio.h>
int main()
{
    char pao, carne, verdura, verdura2, verdura3, molho, pao2;
    
    scanf("%c%c%c%c%c%c%c", &pao, &carne, &verdura, &verdura2, &verdura3, &molho, &pao2);
    
    if((pao=='.' || pao==':') && (pao==pao2) &&
    (carne=='b' || carne== 'f' || carne== 'p' || carne== ' ')&&
    (verdura== 'A' || verdura== 'T' || verdura== 'C' || verdura== 'R' || verdura== ' ')&&
    (verdura2== 'A' || verdura2== 'T' || verdura2== 'C' || verdura2== 'R' || verdura2== ' ')&&
    (verdura3== 'A' || verdura3== 'T' || verdura3== 'C' || verdura3== 'R' || verdura3== ' ')&&
    (molho== 'P')&&
    (pao2== '.' || pao2== ':')){
        printf("Valido\n");
    }
    else if(molho!='P'){
        printf("Invalido\n...Mas pelo menos ganhou um chute\n");
    }
    else{
        printf("Invalido\n");
    }
    return 0;
}
