#include <stdio.h>
#include <string.h>
#include "moduloFuncoes.h"

void menu(){
    printf("\t\t-----------------------------------\n");
    printf("\t\t\t LISTA LÓGICA PARTE 3\n");
    printf("\t\t-----------------------------------\n");
    printf("\t\t\t0 - sair\n");
    printf("\t\t\t1 - questao 1\n");
    printf("\t\t-----------------------------------\n");
    printf("Digite opcao desejada: ");
}

void questao01(){
    int vetor[20];

    for (int i = 0; i < 20; i++){
        vetor[i] = 0;
        printf("[%d] = %d\n", i, vetor[i]);
    }
    
}