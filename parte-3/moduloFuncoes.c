#include <stdio.h>
#include <string.h>
#include "moduloFuncoes.h"


#define NAO_ENCONTRADO -1
#define COUNT 10
#define TAMANHO 15
#define DEZ 10

void inserirValores(int vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("digite valor: ");
        scanf("%d", &vetor[i]);
    }
}

void copiarVetor(int vetor[], int copia[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        copia[i] = vetor[i];
    }
}

void imprimirVetor(int vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("[%d]\n", vetor[i]);
    }
}

void menu(){
    printf("\t\t-----------------------------------\n");
    printf("\t\t\t LISTA LÓGICA PARTE 3\n");
    printf("\t\t%d de 40 questões respondidas\n", COUNT);
    printf("\t\t-----------------------------------\n");
    printf("\t\t\t0 - sair\n");
    printf("\t\t\t1 - questao 1\n");
    printf("\t\t\t2 - questao 2\n");
    printf("\t\t\t3 - questao 3\n");
    printf("\t\t\t4 - questao 4\n");
    printf("\t\t\t5 - questao 5\n");
    printf("\t\t\t6 - questao 6\n");
    printf("\t\t\t7 - questao 7\n");
    printf("\t\t\t8 - questao 8\n");
    printf("\t\t\t9 - questao 9\n");
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
    int vetor[10], pares;

    inserirValores(vetor, 10);
    pares = 0;
    for(int j = 0; j < 10; j++){
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
    int vetor[20], maior, menor, posMaior, posMenor;

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

    for(int i = 0; i < size; i++){
        if(vetorA[i] > vetorB[i]){ 
            vetorMaior[i] = vetorA[i];
        } else{ 
            vetorMaior[i] = vetorB[i]; 
        }
    }

    imprimirVetor(vetorMaior, size);
}

void questao08(){
    int mes[30], size, maisChuva, menosChuva, primeiraQuinzena, segundaQuinzena;
    size = 30;
    int primeira = (size / 2 - 1);
    int segunda = primeira + 1;

    inserirValores(mes, size);

    maisChuva = menosChuva = primeiraQuinzena = segundaQuinzena = 0;
    
    for(int i = 0; i < size; i++){
        if(maisChuva < mes[i+1]){ maisChuva = mes[i]; }
        if(menosChuva > mes[i+1]){ menosChuva = mes[i]; }
    }

    for(int j = 0; j < primeira; j++){ primeiraQuinzena += mes[j]; }

    for(int k = segunda; k < size; k++){ segundaQuinzena += mes[k]; }
    
    primeiraQuinzena = primeiraQuinzena / (size/2);
    segundaQuinzena = segundaQuinzena / (size/2);

    printf("média pluviométrico primeira quinzena = %d\n", primeiraQuinzena);
    printf("média pluviométrico segunda quinzena = %d\n", segundaQuinzena);
}

int questao09(int vetor[], int valor){
    int qtdVezes, i;

    qtdVezes = 0;

    for(i = 0; i < TAMANHO; i++){
        if(vetor[i] == valor)
            qtdVezes++;
    }

    return qtdVezes;
}

int questao10(int valor){
    int vetor[DEZ], tamanho, posicao;
    tamanho = DEZ;
    posicao= -1;
    
    inserirValores(vetor, tamanho);

    for(int i = 0; i < tamanho; i++){
        if(vetor[i] == valor){
            printf("valor encontrado! %d", i+1);
            posicao = i+1;
        }
    }

    return posicao;
}

