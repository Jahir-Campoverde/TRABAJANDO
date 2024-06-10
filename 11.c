#include <stdio.h>

int main(){

    //ENCONTRAR EL MCD

//DECLARAR VARIABLES

int numero1 = 54;
int numero2 = 24;
int mcd = 1;
int i = 1;

while( i <= numero1 && i <= numero2 ){
    if(numero1 % i == 0 && numero2 % i == 0){
        mcd = i;
    }
    i++;

}
printf("El MCD de %d y %d es: %d\n",numero1,numero2,mcd);
return 0;
}