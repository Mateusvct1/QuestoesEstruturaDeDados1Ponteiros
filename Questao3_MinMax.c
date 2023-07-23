/*
3 - Crie uma função que receba por parâmetro um vetor de números inteiros e os endereços de duas variáveis inteiras (min e max). Ao passar essas variáveis para a função seu programa deverá analisar qual é o maior e o menor elemento do vetor e depositar esses elementos nas variáveis do parâmetro.

*/


#include <stdio.h>


void minMax (int *vet, int *max, int *min){
int i, Vmenor = 999999999, Vmaior = 0;
    for(i=0;i<5;i++){
        if(vet[i] < Vmenor){
            Vmenor=vet[i];
        }
        if (vet[i] > Vmaior){
            Vmaior=vet[i];
        }
        *min = Vmenor;
        *max = Vmaior;
    }

}

    int main(){

    int vet[5] = {3,27,8,2,12};
    int min=0, max=0;
    minMax(vet,&max,&min);
    printf("O valor minimo: %d, e o valor maximo: %d",min,max);
    return 0;
}