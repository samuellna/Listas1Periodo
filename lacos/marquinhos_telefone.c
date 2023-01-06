#include <stdio.h>
int main(){
    int n1,n2,n3;
    int num1,num2;
    int i,j,k;
    int ehcomposto1=0, ehcomposto2=0, existe=0;
    
    scanf("%d__%d-%d", &n1,&n2,&n3);
    
    if(n1==0 || n2==0) printf("Marquinhos esta louco!\n");
    
    for(i=1;i<=99;i++){
        ehcomposto1=0;
        ehcomposto2=0;
        if(i<n1 || i<n2){
            ehcomposto1=1;
            ehcomposto2=2;
        }
            num1= i/n1;
            num2= i/n2;
        for(k=2; k<num1 ;k++){
            if(num1%k==0) ehcomposto1=1;
        }
        for(j=2; j<num2 ;j++){
            if(num2%j==0) ehcomposto2=1;
        }
        if(num1==1 || num2==1){
            ehcomposto1=1;
            ehcomposto2=1;
        }
        else if(ehcomposto1==0 && ehcomposto2==0){
            existe=1;
            if(i>=1 && i<10){
                printf("%d0%d%d-%d\n",n1,i,n2,n3);
            }else{
                printf("%d%d%d-%d\n",n1,i,n2,n3);
            }
        }
    }
    if(existe == 0) printf("Marquinhos esta louco!\n");
    
    return 0;
}