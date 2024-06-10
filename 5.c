#include<stdio.h>
int main(){

    //SERIE DE FIBONACCI

//DECLARAR VARIABLES 

int serie = 8;
int primer = 0; //INICIA EN 0
int segundo = 1; //EL SEGUNDO SERA 1
int siguiente;
int i = 0;
printf(" La serie FIBONACCI es:\n");
while( i < serie){
    if( i <= 1)
    siguiente = i;
    else{
        siguiente = primer + segundo;
        primer = segundo;
        segundo = siguiente;
    }
    
printf(" %d ",siguiente);
i++;
    
}


    return 0;
}