#include<stdio.h>
int main(){

    //VERIFICAR SI UN NUMERO ES PRIMO 

//DECLARAR VARIABLES

int numero = 7;
int i = 2;

while( i <= numero / 2){
    if(numero % i == 0){
        printf(" %d no es primo\n",numero);
        return 0;
    }
    i++;
}
printf("%d es primo \n",numero);

    return 0;
}