#include<stdio.h>
int main(){

    //EL INVERSO DE UN NUMERO

//DECLARAR VARIABLES

int numero = 12567;
int resultado;
int inverso = 0;

while(numero != 0 ){
    resultado = numero %10;
    inverso = inverso * 10 + resultado;
    numero /=10;
    
}
printf("El inverso es : %d\n ",inverso);


    return 0;
}