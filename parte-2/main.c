#include <stdio.h>
#include "moduloFuncoes.h"

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

            case 3: {
                int resultado = questao03();
                printf("Média de idade = %d \n", resultado);
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

            default: {
                printf("Opcao incorreta, tente novamente!\n");
                break;
            }
        }
    }

    return 0;
}