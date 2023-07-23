/*
    EXTRA - 3


    Faça um programa que modifique as vogais de uma frase. O programa deve ler uma frase (max. 100 caracteres) e armazená-la num vetor. Imprima a frase lida trocando as vogais, isto é, trocar 'a' pelo ‘e', 'e' pelo ‘i', 'i' pelo ‘o', 'o' pelo ‘u' e o 'u' pelo ‘a'. Usar uma função void para realizar a troca e uma função para realizar a impressão da frase trocada. A função deve ter como parâmetro um ponteiro char referente ao vetor.

    Dica: Use a função gets() da biblioteca string.h para realizar a leitura da frase. Use o switch para realizar as trocas.
*/
#include <stdio.h>
#include <string.h>

void troca(char *str)
{
    int i, tam;
    tam = strlen(str);
    for (i = 0; i < tam; i++)
    {
        switch (*str)
        {
        case 'a':
            *str = 'e';
            break;
        case 'e':
            *str = 'i';
            break;
        case 'i':
            *str = 'o';
            break;
        case 'o':
            *str = 'u';
            break;
        case 'u':
            *str = 'a';
            break;
        }
        str++;
    }
}

void imprimir(char *str)
{
    int i;
    char *p;
    p = str;
    for (i = 0; i < strlen(str); i++)
    {
        printf("%c", *p);
        p++;
    }
}

int main()
{
    char frase[100];
    printf("digite a frase: ");
    gets(frase);

    troca(frase);
    imprimir(frase);

    return 0;
}