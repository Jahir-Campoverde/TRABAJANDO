#include<stdio.h>
int main(){

    //PRODUCTO DE UNA SERIE DE NUMEROS FRACCIONARIOS

//DECLARAR VARIABLES 

int n = 3;
double producto = 1;
int i = 1;

while( i <= n){
    producto *= 1.0 / i;
    i++;
}
printf(" %.2f\n",producto);
    return 0;
}