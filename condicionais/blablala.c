#include <stdio.h>
int main (){

    int a, b, c, d, w, x, y, z;

    w=0, x=0, y=0, z=0;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a<0 || b<0 || c<0 || d<0) printf("lurn maf :(\n");

    else{
        if(a==0){
            w = b*b;
            if(w>0) x = 2;
        }

        if(b+x>y){
            if(w>=c){
                y=w-c;
            } 
            if(y>0 && d < 2000){
                z=2000-d;
            }
            if(w<c){
                y = 0;
            }
        }

        if(y==0){
            (z=500);
        }

        printf("%d", w); 
        printf(" laranjas\n");
        printf("%d", x);
        printf(" bananas\n");
        printf("%d", y);
        printf(" ovos\n");
        printf("%d", z);
        printf(" mL de leite\n");
    }


    return 0;
}