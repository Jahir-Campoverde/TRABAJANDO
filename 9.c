#include<stdio.h>
int main(){

    //NUMERO DE DIGITOS DE UN NUMERO

//DECLARAR VARIABLES

int numero = 12567;
int cantidad = 0;
int i = numero;

while(i !=0){
    i /=10;
    cantidad++;
}
printf("El numero %d tiene %d digitos \n ",numero,cantidad);
    return 0;
}