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

            default:{
                printf("opcao incorreta, tente novamente!\n");
                break;
            }
        }
    }
    return 0;
}