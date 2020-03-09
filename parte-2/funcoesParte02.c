#include <stdio.h>
#include "moduloFuncoes02.h"

void menu(){
    printf("\t\t-----------------------------------\n");
    printf("\t\t\t LISTA LÓGICA PARTE 2\n");
    printf("\t\t-----------------------------------\n");
    printf("\t\t\t0 - sair\n");
    printf("\t\t\t1 - questao 1\n");
    printf("\t\t-----------------------------------\n");
    printf("\t\tDigite opcao desejada: ");
}

void questao01(){
    int op, exit = 0;

    while(!exit){
        printf("\n");
        printf("1 - Média Aritmetica\n");
        printf("2 - Média Ponderada\n");
        printf("3 - Sair\n");
        printf("Digite opcao desejada: ");
        scanf("%d", &op);

        switch(op){
            case 1: {
                float valorA, valorB, mediaAritmetica;
                
                printf("Valor 1: ");
                scanf("%f", &valorA);
                printf("Valor 2: ");
                scanf("%f", &valorB);

                mediaAritmetica = ( valorA + valorB ) / 2;
                printf("Média aritmetica = %.1f\n", mediaAritmetica);

                break;
            }

            case 2: {
                float notaA, notaB, notaC, pesoA, pesoB, pesoC, mediaPonderada;

                printf("Nota 1: ");
                scanf("%f", &notaA);

                printf("Nota 2: ");
                scanf("%f", &notaB);

                printf("Nota 3: ");
                scanf("%f", &notaC);

                printf("Peso 1: ");
                scanf("%f", &pesoA);

                printf("Peso 2: ");
                scanf("%f", &pesoB);

                printf("Peso 3: ");
                scanf("%f", &pesoC);

                mediaPonderada = ((notaA * pesoA) + (notaB * pesoB) + (notaC * pesoC)) / (pesoA + pesoB + pesoC);
                printf("Média ponderada = %.1f\n", mediaPonderada);

                break;
            }

            case 3: {
                exit = 3;
                printf("Finalizando...");
                break;
            }
        }
    }
    
}