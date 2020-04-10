#include <stdio.h>
#include <string.h>
#include "moduloFuncoes.h"

int main(){
    int op, exit = 0;

    while(!exit){
        menu();
        scanf("%d", &op);

        switch (op){
            case 0: {
                printf("finalizando...\n");
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
                questao03();
                break;
            }

            case 4:
            case 5: {
                questao04();
                break;
            }

            case 6: {
                questao06();
                break;
            }

            case 7: {
                questao07();
                break;
            }

            case 8: {
                questao08();
                break;
            }

            case 9: {
                int valor;
                int vetor[15] = {96, 91, 58, 51, 1, 70, 15, 91, 2, 8, 5, 11, 97, 22, 21};

                printf("Digite valor: ");
                scanf("%d", &valor);

                int qtdVezes = questao09(vetor, valor);

                printf("Esse valor aparece %d\n", qtdVezes);

                break;
            }

            case 10: {
                int valor, resultado;

                printf("valor a ser buscado: ");
                scanf("%d", &valor);

                resultado = questao10(valor);

                printf("valor encontrado primeiro na posição [%d]", resultado);
                
                break;
            }
            default:{
                printf("opcao incorreta, tente novamente!\n");
                break;
            }
        }
    }
    return 0;
}