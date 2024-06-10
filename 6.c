#include<stdio.h>
int main(){

    //FACTORIAL DE UN NUMERO

//DECLARAR VARIABLES

int numero = 5;
int factorial = 1;
int i = 1;

while(i <= numero){
    factorial *= i;
    i++;
}
printf(" %d! = %d",numero,factorial);
    return 0;
}