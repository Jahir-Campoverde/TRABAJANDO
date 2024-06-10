#include<stdio.h>
int main(){
    
    //CALCULAR LA SUMA DE LOS FACTORIALES DE LOS PRIMEROS N NUMEROS

//DECLARAR VARIABLES

int n = 3;
int suma = 0;
int contador = 1;

while( contador <= n){
    int factortial = 1;
    int i = 1;

    while(i <= contador){
        factortial *= i;
        i++;
    }
    suma += factortial;
    contador++;

}
printf("Los factoriales de los primeros %d numeros es: %d\n",n,suma);
    return 0;
}