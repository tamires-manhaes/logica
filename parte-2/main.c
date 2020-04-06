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

            case 10: {
                int valorA, valorB, valorC;
                printf("Valor A: ");
                scanf("%d", &valorA);

                printf("Valor B: ");
                scanf("%d", &valorB);

                printf("Valor C: ");
                scanf("%d", &valorC);

                int resultado = questao10(valorA, valorB, valorC);

                printf("valor da soma dos dois maiores = %d", resultado);
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

            case 13: {
                char opcao;
                printf("QUal tipo de combustivel: ");
                scanf("%s", &opcao);

                float valorTotal = questao13(opcao);

                printf("Valor total a pagar: %.2f", valorTotal);
                break;
            }

            case 14: {
                int opcao;
                printf("----\n");
                printf("TIPO 1 - ervas daninhas\n");
                printf("TIPO 2 - garfanhotos\n");
                printf("TIPO 3 - broca\n");
                printf("TIPO 4 - todos acima\n");
                printf("----\n");

                printf("Digite a opcao desejada: ");
                scanf("%d", &opcao);
                
                float valorTotal = questao14(opcao);

                printf("----\n");
                printf("Valor a pagar: R$%.2f\n", valorTotal);

                break;
            }

            case 15:{
                int valor;
                printf("Digite valor: ");
                scanf("%d", &valor);

                questao15(valor);
                break;
            }

            case 17: {
                float nota1, nota2, nota3;

                printf("Nota 1: ");
                scanf("%f", &nota1);
                printf("Nota 2: ");
                scanf("%f", &nota2);
                printf("Nota 3: ");
                scanf("%f", &nota3);

                int resultado = questao17(nota1, nota2, nota3);

                if(resultado != 1){
                    printf("Reprovado\n");
                } else {
                    printf("Aprovado\n");
                }

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