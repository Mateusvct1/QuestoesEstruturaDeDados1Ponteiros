/*
2 - Crie um programa que contenha um array de inteiros contendo 10 elementos. Imprima os endereços de cada posição desse array.
*/

#include <stdio.h>


int main(){

    int *p, i, vet[10];

    p = &vet[0];

    for (i = 0; i < 10; i++){
       
        printf("vet[%d]: %p\n", i, p); // %p para imprimir endereços de ponteiros
        p++;
    }

    return 0;
}