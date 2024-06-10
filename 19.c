#include<stdio.h>
int main(){

    //CALCULAR EL N-ESIMO NUMERO TRIANGULAR

//DECLARAR VARIABLES


int n = 4;
int triangular = 0;
int i = 1;

while(i <= n){
    triangular += i;
    i++;

}
printf(" %d\n",triangular);
    return 0;
}