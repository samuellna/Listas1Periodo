#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct{
    char nome[40];
    int peso;
    float preco;
    int serial_number;
    int centro;
}produto;

typedef struct{
    double pos_x;
    double pos_y;
    double carro_x;
    double carro_y;
}center;

int existe(int x, int *array, int tam){
    for (int i = 0; i < tam; i++)    {
        if (x == array[i]){
            return 1;
        }
    }
    return 0;
}

int main(void){

    int n, p;
    int i, j, k = 0;
    scanf("%d %d", &n, &p);
    
    int serial_array[n];
    center centros[p];
    produto produtos[n];

    for(i = 0; i < p; i++){
        scanf("%lf %lf", &centros[i].pos_x, &centros[i].pos_y);
        centros[i].carro_x = centros[i].pos_x;
        centros[i].carro_y = centros[i].pos_y;
    }
    
    for(i = 0; i < n; i++){
        scanf(" %s %d %f", produtos[i].nome, &produtos[i].peso, &produtos[i].preco);
    }
    
    for(j = 0; j < n - 1; j++){
        for(i = 0; i < n - 1; i++){
            if(strcmp(produtos[i].nome, produtos[i + 1].nome) > 0){
                produto aux = produtos[i];
                produtos[i] = produtos[i + 1];
                produtos[i + 1] = aux;
            }
        }
    }

    for(i = 0; i < n; i++){
        serial_array[i] = 999;
    }
    for(i = 0; i < n; i++){
        int serial_temp;
        int preco_tem = ceil(produtos[i].preco);
        serial_temp = (preco_tem + i + produtos[i].peso + k) % n;
        if(!existe(serial_temp, serial_array, n)){
            serial_array[i] = serial_temp;
            produtos[i].serial_number = serial_temp;
            k = 0;
            produtos[i].centro = produtos[i].serial_number / (n / p);
        }
        else{
            i--;
            k++;
        }
    }
    for(j = 0; j < n - 1; j++){
        for(i = 0; i < n - 1; i++){
            if(produtos[i].serial_number > produtos[i + 1].serial_number){
                produto aux = produtos[i];
                produtos[i] = produtos[i + 1];
                produtos[i + 1] = aux;
            }
        }
    }

    int serial;
    double x, y;
    
    while(scanf("%d", &serial) != -1){
        if(serial == -1) break;

        scanf("%lf %lf", &x, &y);
        int menor = 9999999999999;
        int idc_menor = 0;
        for (j = 0; j < p; j++){
            int distancia = pow(centros[j].carro_x - centros[produtos[serial].centro].pos_x, 2) + pow(centros[j].carro_y - centros[produtos[serial].centro].pos_y, 2);
            if (distancia < menor){
                menor = distancia;
                idc_menor = j;
            }
        }
        printf("delivered %s s. %d by vehicle %d\n", produtos[serial].nome, produtos[serial].serial_number, idc_menor + 1);
        centros[idc_menor].carro_x = x;
        centros[idc_menor].carro_y = y;
    }

    printf("Thank you for using this service. Bye!\n");
    
}