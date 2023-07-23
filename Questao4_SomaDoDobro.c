/*
4 - Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função que retorne a soma do dobro dos dois números lidos. A função deverá armazenar os valores nas próprias variáveis.

*/

#include <stdio.h>



int somaDoDobro (int *a, int *b){

    *a = *a * 2;
    *b = *b * 2;
    return *a + *b;

}

int main (){

    int x=2,y=3;

    somaDoDobro(&x,&y);
     
     printf(" A soma do dobro desses dois valores: %d",x+y);
     return 0;
}