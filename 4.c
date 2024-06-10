#include<stdio.h>
int main(){

    //RADIACION MEDIANTE SUMAS SUCESIVAS

//DECLARAR VARIABLES

int raiz = 27;
int cubica = 3;
int i = 1;

while(i * i * i <= raiz){
    cubica = i;
    i++;
}
printf(" %d\n ",cubica);

    return 0;
}