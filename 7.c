#include<stdio.h>
int main(){

    //SUMA DE UNA SERIE ARTIMETICA

//DECLARAR VARIABLES

int serie = 6;
int suma = 0;
int i = 1;

while(i <= serie){
    suma += i;
    i++;
}
printf("La suma de los primeros %d es:%d\n ",serie,suma);

    return 0;
}