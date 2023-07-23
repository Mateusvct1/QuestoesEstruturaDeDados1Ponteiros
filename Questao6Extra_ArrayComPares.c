/*
EXTRA - 2

Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array do teclado e imprima o endereço das posições contendo valores pares.

*/

#include <stdio.h>

int main()
{

    int *p, vet[5], i;
    p = &vet[0];
    printf("digite os elementos do vetor:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", p);
        p++;
        ;
    }
    p = &vet[0];
    for (i = 0; i < 5; i++)
    {
        if (*p % 2 == 0)
        {
            printf("vet[%d] = %p\n", i, p);
        }
        p++;
    }
    return 0;
}
