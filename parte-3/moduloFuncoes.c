#include <stdio.h>
#include <string.h>
#include "moduloFuncoes.h"

void inserirValores(int vetor[], int tamanho){
    int i;

    for(i = 0; i < tamanho; i++){
        printf("digite valor: ");
        scanf("%d", &vetor[i]);
    }
}

void imprimirVetor(int vetor[], int tamanho){
    for(int cont = 0; cont < tamanho; cont++){
        printf("[%d]\n", vetor[cont]);
    }
}

void menu(){
    printf("\t\t-----------------------------------\n");
    printf("\t\t\t LISTA LÓGICA PARTE 3\n");
    printf("\t\t-----------------------------------\n");
    printf("\t\t\t0 - sair\n");
    printf("\t\t\t1 - questao 1\n");
    printf("\t\t\t2 - questao 2\n");
    printf("\t\t\t3 - questao 3\n");
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

void questao02(){
    int vetor[10], j, pares;

    inserirValores(vetor, 10);
    pares = 0;
    for(j = 0; j < 10; j++){
        if(vetor[j] % 2 == 0){
            pares++;
        }
    }
    printf("\n");
    printf("foram encontrados [%d] numeros pares\n", pares);
}

void questao03(){
    int vetorA[10], vetorB[10], vetorSoma[10];

    printf("* Adicionando valores vetor A *\n");
    inserirValores(vetorA, 10);
    printf("\n");
    printf("* Adicionando valores vetor B *\n");
    inserirValores(vetorB, 10);
    printf("\n");
    
    for (int i = 0; i < 10; i++)
        vetorSoma[i] = vetorA[i] + vetorB[i];

    imprimirVetor(vetorSoma, 10);
}