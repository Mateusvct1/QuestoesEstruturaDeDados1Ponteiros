/*
1 - Escreva uma função chamada troca que troca os valores dos parâmetros recebidos usando ponteiros.

*/

#include <stdio.h>


void troca( int *a, int *b){
    int aux;

    aux= *a;
    *a = *b;
    *b = aux;

}

int main(){

    int x = 3,y= 5;

    printf("Valor antes da troca %d | %d \n",x,y);
    troca(&x,&y);
    printf("Valor depois da troca %d | %d \n",x,y);

    return 0;
    
}