/*
EXTRA - 1

Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.

*/

#include <stdio.h>


int main()
{
    int vet[5], i, *p;
    p = &vet[0];
    printf("digite os elementos do vetor:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", p);
        p++;
    }
    p = &vet[0];
    printf("o dobro dos valores: \n"); 
    for (i = 0; i < 5; i++)
    {

        printf(" vet[%d] = %d\n", i, *p * 2);
        p++;
    }

    return 0;
}
