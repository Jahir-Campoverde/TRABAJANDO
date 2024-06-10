#include<stdio.h>
int main(){

    //SUMA DE LOS CUADRADOS DE LOS PRIMEROS N NUMEROS

//DECLARAR VARIABLES

int n = 3;
int suma = 0;
int i = 1;

while(i <= n){
    suma += i * i;
    i++;
}
printf(" %d\n",suma);
    return 0;
}