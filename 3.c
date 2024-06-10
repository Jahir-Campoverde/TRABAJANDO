#include<stdio.h>
int main(){

    //LA POTENCIA DE UN NUMERO UTILIZANDO SUMAS SUCESIVAS

 //DECLARAR VARIABLES

 int exponente = 3;
 int base = 2;
 int resultado = 1;
int i = 1;

while(i <= exponente){
    resultado *= base;
    i++;
}
printf(" :%d^%d = %d\n",base,exponente,resultado);
    return 0;
}