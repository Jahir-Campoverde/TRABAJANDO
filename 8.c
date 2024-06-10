#include<stdio.h>
int main(){

    //PRODUCTO DE UNA SERIE GEOMETRICA

//DECLARAR VARIABLES

int primer = 2;
int producto = 1;
int razon = 2;
int serie = 4;
int i = 0;

while(i < serie){

    producto *=primer;
    primer *= razon;
    i++;
}
printf(" %d\n ",producto);
    return 0;
}