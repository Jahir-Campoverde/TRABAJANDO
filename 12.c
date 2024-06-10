#include<stdio.h>
int main(){

    //SUMAR LOS NUMEROS IMPARES HASTA N

//DECLARAR VARIABLES

int n = 10;
int suma = 0;
int i = 1;
while( i <= n){
    suma += i;
    i += 2;
}
printf("La suma de los %d primeros numeros impares es: %d\n ",n,suma);
    return 0;
}