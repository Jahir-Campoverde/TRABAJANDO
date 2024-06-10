#include<stdio.h>
int main(){

    //CALCULAR LA SUMA DE LOS DIGITOS DE UN NUMERO

//AGREGAR VARIABLES 
int numero = 12567;
int resultado ;
int suma = 0;

while (numero != 0){

      
     resultado = numero %10;
     
     suma += resultado; 
   numero /=10;     
}
printf("EL RESULTADO ES:%d\n",suma);

}