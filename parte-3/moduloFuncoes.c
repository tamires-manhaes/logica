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

void copiarVetor(int vetor[], int copia[], int tamanho){
    int i;

    for(i = 0; i < tamanho; i++){
        copia[i] = vetor[i];
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
    printf("\t\t\t4 - questao 4\n");
    printf("\t\t\t5 - questao 5\n");
    printf("\t\t\t6 - questao 6\n");
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

// questão 4 & 5
void questao04(){
    int maior, menor, posMaior, posMenor;
    int vetor[20];

    inserirValores(vetor, 20);
    printf("\n");

    maior = menor = 0;
    
    for(int i = 0; i < 20; i++){
        if(maior < vetor[i+1]){
            maior = vetor[i];
             posMaior = i;
        }

        if(menor > vetor[i+1]){
            menor = vetor[i];
            posMenor = i;
        }
    }

    printf("maior = [%d] na posicao [%d]\n", maior, posMaior);
    printf("menor = [%d] na posicao [%d]\n", menor, posMenor);
}

void questao06(){
    int vetor[10], copia[10], size;
    size = 10;

    inserirValores(vetor, size);
    copiarVetor(vetor, copia, size);
    printf("vetor cópia: \n");
    imprimirVetor(copia, size);
}

void questao07(){
    int vetorA[10], vetorB[10], vetorMaior[10], size;
    size = 10;

    inserirValores(vetorA, size);
    inserirValores(vetorB, size);

    int i;
    for(i = 0; i < size; i++){
        if(vetorA[i] > vetorB[i]){ 
            vetorMaior[i] = vetorA[i];
        } else{ 
            vetorMaior[i] = vetorB[i]; 
        }
    }

    imprimirVetor(vetorMaior, size);
}