#include<stdio.h>
int main(){

    //SUMA DE UNA SERIE DE NUMEROS FRACCIONARIOS 

//DECLARAR VARIABLES 

int n = 3;
double suma = 0;
int i = 1;

while( i <= n){
    suma += 1.0 / i;
    i++;
}
printf(" %f\n",suma);
    return 0;
}