#include <stdio.h>
#include <string.h>

int main(){
    char c;
    int dist, larg, i, j, z = 0;
    scanf(" %c", &c);
    
    dist = c - 64;
    larg = (2 * dist) - 1;

    for(i = 'A'; i <= c; i++){
        
        for(j = 0; j < larg/2 - z; j++){
            printf(".");
        }

        for(j = 'A'; j < i; j++){
            printf("%c", j);
        }

        for(j = i; j >= 'A'; j--){
            printf("%c", j);
        }

        for(j = 0; j < larg/2 - z; j++){
            printf(".");
        }

        printf("\n");
        z++;

    }

    return 0;
}