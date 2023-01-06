#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, a, b, n, m;
    
    scanf("(%d,%d)", &x, &y);
    scanf("%d * x ^ %d - %d * y ^ %d", &a, &n, &b, &m);
    
    float deno= a*pow(x,n)-b*pow(y,m);
    
    
    if(deno!= 0){
    printf("a fun��o est� definida em (%d,%d)", x, y);
    }
    
    else{
    printf("a fun��o n�o est� definida em (%d,%d) .-.", x,y);
    }

    return 0;
}