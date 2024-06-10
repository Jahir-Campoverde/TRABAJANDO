#include<stdio.h>
int main(){

    //CONTAR LOS NUMEROS PRIMOS HASTA N

//DECLARAR VARIABLES

int n = 10;
int numero = 2;
int contador = 0;

while(numero <= n){
    int esPrimo = 1;
    int divisor = 2;

    while(divisor <= numero / 2){
        if(numero % divisor == 0){
             esPrimo = 0;
        }
       divisor++;
    }
    if(esPrimo == 1){
        contador++;
    }
    numero++;
}
printf("El numero de primos hasta %d es: %d\n",n,contador);
    return 0;
}