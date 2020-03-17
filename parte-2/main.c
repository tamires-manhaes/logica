#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "moduloFuncoes.h"

#define TAMANHO 2

int main(){
    int opcao, exit = 0;

    while(!exit){
        menu();
        scanf("%d", &opcao);
        switch(opcao){
            case 0: {
                printf("Finalizando...");
                exit = 1;
                break;
            }

            case 1: {
                questao01();
                break;
            }

            case 2: {
                questao02();
                break;
            }

            case 3: {
                int resultado = questao03();
                printf("Média de idade = %d \n", resultado);
                break;
            }

            case 4: {
                questao04();
                break;
            }

            case 6: {
                int valor;
                printf("Digite valor: ");
                scanf("%d", &valor);

                int resultado = questao06(valor);
                if(resultado != -1){
                    printf("valor encontrado na posicao %d \n", resultado+1);
                } else {
                    printf("valor não encontrado!\n");
                }

                break;
            }

            case 7: {
                questao07();    
                break;
            }

            case 11: {
                int valor, resultado;

                printf("Digite valor: ");
                scanf("%d", &valor);

                resultado = questao11(valor);

                if(resultado == 0){
                    printf("Eh par!\n");
                } else {
                    printf("Não eh par!\n");
                }

                break;
            }

            case 12: {
                int valor;

                printf("digite valor: ");
                scanf("%d", &valor);

                int resultado = questao12(valor);

                printf(" a raiz quadrada de %d eh = %d\n", valor, resultado);
                break;
            }

            case 19 : {
                questao19();
                break;
            }

            case 20: {
                questao20();
                break;
            }

            case 21: {
                questao21();
                break;
            }

            case 22: {
                questao22();
                break;
            }

            case 23: {
                float valorA, valorB, valorC, valorD, valorE, resultado;

                printf("valor A: ");
                scanf("%f", &valorA);

                printf("valor B: ");
                scanf("%f", &valorB);

                printf("valor C: ");
                scanf("%f", &valorC);

                printf("valor D: ");
                scanf("%f", &valorD);

                printf("valor E: ");
                scanf("%f", &valorE);

                resultado = questao23(valorA, valorB, valorC, valorD, valorE);

                printf("média = %.1f", resultado);
                break;
            }

            default: {
                printf("Opcao incorreta, tente novamente!\n");
                break;
            }
        }
    }

    return 0;
}