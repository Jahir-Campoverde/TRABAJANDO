#include<stdio.h>
int main(){

//SUMAR LOS NUMEROS PARES HASTA N

//DECLARAR VARIABLES

int n = 10;
int suma = 0;
int i = 2;

while(i <= n){
    suma += i;
    i += 2;

}
printf("La suma de los %d primeros numeros pares es: %d\n ",n,suma);
    return 0;
}